/*
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#define GLM_FORCE_RADIANS

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <fstream>
#include "constants.h"
#include "lodepng.h"
#include "shaderprogram.h"
#include "myTeapot.h"
#include "pelvis.h"
#include "bone.h"
#include "foot.h"
#include "floor.h"

float speed_x=0; //angular speed in radians
float speed_y=0; //angular speed in radians
float aspectRatio=1;
ShaderProgram *sp; //Pointer to the shader program
bool activeLeg=false;
std::vector<std::vector<float>> steps;
long long frameNo=0;

GLuint tex0;
GLuint spec0;
GLuint tex1;
GLuint spec1;

void loadSteps(){
    std::vector<float> temp;
    float buff;
    std::ifstream stepFile;
    stepFile.open("steps.txt");
    while(!stepFile.eof())
    {
        for(int i=0;i<10;i++)
        {
            stepFile>>buff;
            temp.push_back(buff);
        }

        //printf("%f\n",temp[1]);
        steps.push_back(temp);
        temp.clear();
    }
    stepFile.close();
}


//Error processing callback procedure
void error_callback(int error, const char* description) {
	fputs(description, stderr);
}

void keyCallback(GLFWwindow* window,int key,int scancode,int action,int mods) {
    if (action==GLFW_PRESS) {
        if (key==GLFW_KEY_LEFT) speed_x=-PI/2;
        if (key==GLFW_KEY_RIGHT) speed_x=PI/2;
        if (key==GLFW_KEY_UP) speed_y=PI/2;
        if (key==GLFW_KEY_DOWN) speed_y=-PI/2;
    }
    if (action==GLFW_RELEASE) {
        if (key==GLFW_KEY_LEFT) speed_x=0;
        if (key==GLFW_KEY_RIGHT) speed_x=0;
        if (key==GLFW_KEY_UP) speed_y=0;
        if (key==GLFW_KEY_DOWN) speed_y=0;
    }
}

void windowResizeCallback(GLFWwindow* window,int width,int height) {
    if (height==0) return;
    aspectRatio=(float)width/(float)height;
    glViewport(0,0,width,height);
}


//Function for reading texture files
GLuint readTexture(const char* filename) {
  GLuint tex;
  glActiveTexture(GL_TEXTURE0);

  //Read into computers memory
  std::vector<unsigned char> image;   //Allocate data structure for the image
  unsigned width, height;   //Variables, which will be set to image dimensions
  //Read image
  unsigned error = lodepng::decode(image, width, height, filename);

  //Import to graphics card memory
  glGenTextures(1,&tex); //Initialize a handle
  glBindTexture(GL_TEXTURE_2D, tex); //Activate the handle
  //Copy image from computers memory to graphics cards memory
  glTexImage2D(GL_TEXTURE_2D, 0, 4, width, height, 0,
    GL_RGBA, GL_UNSIGNED_BYTE, (unsigned char*) image.data());

  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

  return tex;
}

//Initialization code procedure
void initOpenGLProgram(GLFWwindow* window) {
	//************Place any code here that needs to be executed once, at the program start************
	glClearColor(0,0,0,1);
	glEnable(GL_DEPTH_TEST);
	glfwSetWindowSizeCallback(window,windowResizeCallback);
	glfwSetKeyCallback(window,keyCallback);
	sp=new ShaderProgram("vertex.glsl",NULL,"fragment.glsl");

    tex0=readTexture("metal.png");
    spec0=readTexture("metal_spec.png");
    tex1=readTexture("cobblestone.png");
    spec1=readTexture("cobblestone_spec.png");
}

//Release resources allocated by the program
void freeOpenGLProgram(GLFWwindow* window) {
	//************Place any code here that needs to be executed once, after the main loop ends************
	glDeleteTextures(1,&tex0);
	glDeleteTextures(1,&spec0);
	glDeleteTextures(1,&tex1);
	glDeleteTextures(1,&spec1);
	delete sp;
}

//Drawing procedure
void drawScene(GLFWwindow* window,float angle_x,float angle_y) {
	//************Place any code here that draws something inside the window******************l
    std::vector<float> temp;
    if((frameNo)<steps.size())
    {

    } else {

    }
    temp = steps[frameNo%steps.size()];
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glm::mat4 V=glm::lookAt(
        glm::vec3(0.0f,0.0f,-5.0f),//provide x and y of the pelvis
        glm::vec3(0.0f,0.0f,0.0f),
        glm::vec3(0.0f,1.0f,0.0f)); //compute view matrix
    V=glm::rotate(V,angle_y,glm::vec3(1.0f,0.0f,0.0f)); //Compute model matrix
    V=glm::rotate(V,angle_x,glm::vec3(0.0f,1.0f,0.0f)); //Compute model matrix

    glm::mat4 P=glm::perspective(76.0f*PI/180.0f, aspectRatio, 1.0f, 50.0f); //compute projectioun matrix

    sp->use();
    glUniformMatrix4fv(sp->u("P"),1,false,glm::value_ptr(P));
    glUniformMatrix4fv(sp->u("V"),1,false,glm::value_ptr(V));
    glUniform4f(sp->u("lp0"),-3,2,-5,1); //Light coordinates in the world space
    glUniform4f(sp->u("lp1"),2,-1.5,6,1);

    float a[3] = {0.0,temp[9],0.0};
    float b[3] = {temp[0],temp[2]+1.57079632679,1.57079632679};
    float c[3] = {temp[3],temp[5]-1.57079632679,1.57079632679};
    float d[3] = {0.0,3.14159265359-temp[1],0.0};
    float e[3] = {0.0,3.14159265359-temp[4],0.0};
    float f[3] = {temp[0]+temp[1]-3.14159265359,0.0,3.14159265359};
    float g[3] = {temp[3]+temp[4]-3.14159265359,0.0,3.14159265359};

    glm::mat4 M=glm::mat4(1.0f);

    glm::mat4 Mp = drawPelvis(sp,glm::vec3(temp[6],temp[8]-2.0f,temp[7]), a, M, tex0, spec0);
    glm::mat4 Mlh = drawBone(sp,glm::vec3(0.5f,0.0f,0.0f), b, Mp, tex0, spec0);
    glm::mat4 Mrh = drawBone(sp,glm::vec3(-0.5f,0.0f,0.0f), c, Mp, tex0, spec0);
    glm::mat4 Mln = drawBone(sp,glm::vec3(-1.0f,0.0f,0.0f), d, Mlh, tex0, spec0);
    glm::mat4 Mrn = drawBone(sp,glm::vec3(-1.0f,0.0f,0.0f), e, Mrh, tex0, spec0);
    glm::mat4 Mlf = drawFoot(sp,glm::vec3(-1.0f,0.0f,0.0f), f, Mln, tex0, spec0);
    glm::mat4 Mrf = drawFoot(sp,glm::vec3(-1.0f,0.0f,0.0f), g, Mrn, tex0, spec0);
    glm::mat4 Mfloor = drawFloor(sp,glm::vec3(0.0f,-2.0f,0.0f), M, tex1, spec1);
    glfwSwapBuffers(window);
    frameNo++;
}

int main(void)
{

    loadSteps();


	GLFWwindow* window; //Pointer to object that represents the application window

	glfwSetErrorCallback(error_callback);//Register error processing callback procedure

	if (!glfwInit()) { //Initialize GLFW library
		fprintf(stderr, "Can't initialize GLFW.\n");
		exit(EXIT_FAILURE);
	}

	window = glfwCreateWindow(500, 500, "OpenGL", NULL, NULL);  //Create a window 500pxx500px titled "OpenGL" and an OpenGL context associated with it.

	if (!window) //If no window is opened then close the program
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	glfwMakeContextCurrent(window); //Since this moment OpenGL context corresponding to the window is active and all OpenGL calls will refer to this context.
	glfwSwapInterval(1); //During vsync wait for the first refresh

	GLenum err;
	if ((err=glewInit()) != GLEW_OK) { //Initialize GLEW library
		fprintf(stderr, "Can't initialize GLEW: %s\n", glewGetErrorString(err));
		exit(EXIT_FAILURE);
	}

	initOpenGLProgram(window); //Call initialization procedure

	//printf("%f",steps[1][1]);
	float angle_x=0; //current rotation angle of the object, x axis
	float angle_y=0; //current rotation angle of the object, y axis
	glfwSetTime(0); //Zero the timer
	//Main application loop
	while (!glfwWindowShouldClose(window)) //As long as the window shouldnt be closed yet...
	{
        angle_x+=speed_x*glfwGetTime(); //Add angle by which the object was rotated in the previous iteration
		angle_y+=speed_y*glfwGetTime(); //Add angle by which the object was rotated in the previous iteration
        glfwSetTime(0); //Zero the timer
		drawScene(window,angle_x,angle_y); //Execute drawing procedure
		glfwPollEvents(); //Process callback procedures corresponding to the events that took place up to now
	}
	freeOpenGLProgram(window);

	glfwDestroyWindow(window); //Delete OpenGL context and the window.
	glfwTerminate(); //Free GLFW resources
	exit(EXIT_SUCCESS);
}
