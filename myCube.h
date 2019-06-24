#ifndef MYCUBE_H_INCLUDED
#define MYCUBE_H_INCLUDED


//myCubeVertices -homogenous coordinates of vertices in model space
//myCubeNormals - homogenous normal vectors of faces (per vertex) in model space
//myCubeVertexNormals - homogenous vertex normals in model space
//myCubeTexCoords - texturing coordinates
//myCubeColors - vertex colors
//myCubeC1 - TBN^-1 matrix column
//myCubeC2 - TBN^-1 matrix column
//myCubeC3 - TBN^-1 matrix column

int myCubeVertexCount=36;

float myCubeVertices[]={
                //Wall 1
				0.15f,-0.025f,-0.025f,1.0f,
				-0.15f, 0.25f,-0.025f,1.0f,
				-0.15f,-0.025f,-0.025f,1.0f,

				0.15f,-0.025f,-0.025f,1.0f,
				0.15f, 0.25f,-0.025f,1.0f,
				-0.15f, 0.25f,-0.025f,1.0f,


				-0.15f,-0.025f, 0.025f,1.0f,
				0.15f, 0.25f, 0.025f,1.0f,
				0.15f,-0.025f, 0.025f,1.0f,

				-0.15f,-0.025f, 0.025f,1.0f,
				-0.15f, 0.025f, 0.025f,1.0f,
				0.15f, 0.025f, 0.025f,1.0f,



				-0.15f,-0.025f,-0.025f,1.0f,
				0.15f,-0.025f, 0.025f,1.0f,
				0.15f,-0.025f,-0.025f,1.0f,

				-0.15f,-0.025f,-0.025f,1.0f,
				-0.15f,-0.025f, 0.025f,1.0f,
				0.15f,-0.025f, 0.025f,1.0f,


				-0.15f, 0.25f, 0.025f,1.0f,
				0.15f, 0.25f,-0.025f,1.0f,
				0.15f, 0.25f, 0.025f,1.0f,

				-0.15f, 0.25f, 0.025f,1.0f,
				-0.15f, 0.25f,-0.025f,1.0f,
				0.15f, 0.25f,-0.025f,1.0f,


				-0.15f,-0.025f,-0.025f,1.0f,
				-0.15f, 0.25f, 0.025f,1.0f,
				-0.15f,-0.025f, 0.025f,1.0f,

				-0.15f,-0.025f,-0.025f,1.0f,
				-0.15f, 0.25f,-0.025f,1.0f,
				-0.15f, 0.25f, 0.025f,1.0f,


				0.15f,-0.025f, 0.025f,1.0f,
				0.15f, 0.25f,-0.025f,1.0f,
				0.15f,-0.025f,-0.025f,1.0f,

				0.15f,-0.025f, 0.025f,1.0f,
				0.15f, 0.25f, 0.025f,1.0f,
				0.15f, 0.25f,-0.025f,1.0f,





			};


float myCubeColors[]={
                //Wall 1
				0.2f,0.2f,0.2f,1.0f,
				0.2f,0.2f,0.2f,1.0f,
				0.2f,0.2f,0.2f,1.0f,

				0.2f,0.2f,0.2f,1.0f,
				0.2f,0.2f,0.2f,1.0f,
				0.2f,0.2f,0.2f,1.0f,

				//Wall 2
				0.2f,0.2f,0.2f,1.0f,
				0.2f,0.2f,0.2f,1.0f,
				0.2f,0.2f,0.2f,1.0f,

				0.2f,0.2f,0.2f,1.0f,
				0.2f,0.2f,0.2f,1.0f,
				0.2f,0.2f,0.2f,1.0f,

				//Wall 3
				0.2f,0.2f,0.2f,1.0f,
				0.2f,0.2f,0.2f,1.0f,
				0.2f,0.2f,0.2f,1.0f,

				0.2f,0.2f,0.2f,1.0f,
				0.2f,0.2f,0.2f,1.0f,
				0.2f,0.2f,0.2f,1.0f,

				//Wall 4
				0.2f,0.2f,0.2f,1.0f,
				0.2f,0.2f,0.2f,1.0f,
				0.2f,0.2f,0.2f,1.0f,

				0.2f,0.2f,0.2f,1.0f,
				0.2f,0.2f,0.2f,1.0f,
				0.2f,0.2f,0.2f,1.0f,

				//Wall 5
				0.2f,0.2f,0.2f,1.0f,
				0.2f,0.2f,0.2f,1.0f,
				0.2f,0.2f,0.2f,1.0f,

				0.2f,0.2f,0.2f,1.0f,
				0.2f,0.2f,0.2f,1.0f,
				0.2f,0.2f,0.2f,1.0f,

				//Wall 6
				0.2f,0.2f,0.2f,1.0f,
				0.2f,0.2f,0.2f,1.0f,
				0.2f,0.2f,0.2f,1.0f,

				0.2f,0.2f,0.2f,1.0f,
				0.2f,0.2f,0.2f,1.0f,
				0.2f,0.2f,0.2f,1.0f,
			};

			float myCubeNormals[]={
				//Wall 1
				0.0f, 0.0f,-1.0f,0.0f,
				0.0f, 0.0f,-1.0f,0.0f,
				0.0f, 0.0f,-1.0f,0.0f,

				0.0f, 0.0f,-1.0f,0.0f,
				0.0f, 0.0f,-1.0f,0.0f,
				0.0f, 0.0f,-1.0f,0.0f,

				//Wall 2
				0.0f, 0.0f, 1.0f,0.0f,
				0.0f, 0.0f, 1.0f,0.0f,
				0.0f, 0.0f, 1.0f,0.0f,

				0.0f, 0.0f, 1.0f,0.0f,
				0.0f, 0.0f, 1.0f,0.0f,
				0.0f, 0.0f, 1.0f,0.0f,

				//Wall 3
				0.0f,-1.0f, 0.0f,0.0f,
				0.0f,-1.0f, 0.0f,0.0f,
				0.0f,-1.0f, 0.0f,0.0f,

				0.0f,-1.0f, 0.0f,0.0f,
				0.0f,-1.0f, 0.0f,0.0f,
				0.0f,-1.0f, 0.0f,0.0f,

				//Wall 4
				0.0f, 1.0f, 0.0f,0.0f,
				0.0f, 1.0f, 0.0f,0.0f,
				0.0f, 1.0f, 0.0f,0.0f,

				0.0f, 1.0f, 0.0f,0.0f,
				0.0f, 1.0f, 0.0f,0.0f,
				0.0f, 1.0f, 0.0f,0.0f,

				//Wall 5
				-1.0f, 0.0f, 0.0f,0.0f,
				-1.0f, 0.0f, 0.0f,0.0f,
				-1.0f, 0.0f, 0.0f,0.0f,

				-1.0f, 0.0f, 0.0f,0.0f,
				-1.0f, 0.0f, 0.0f,0.0f,
				-1.0f, 0.0f, 0.0f,0.0f,

				//Wall 6
				1.0f, 0.0f, 0.0f,0.0f,
				1.0f, 0.0f, 0.0f,0.0f,
				1.0f, 0.0f, 0.0f,0.0f,

				1.0f, 0.0f, 0.0f,0.0f,
				1.0f, 0.0f, 0.0f,0.0f,
				1.0f, 0.0f, 0.0f,0.0f,

			};

			float myCubeVertexNormals[]={
				//Wall 1
				1.0f,-1.0f,-1.0f,0.0f,
				-1.0f, 1.0f,-1.0f,0.0f,
				-1.0f,-1.0f,-1.0f,0.0f,

				1.0f,-1.0f,-1.0f,0.0f,
				1.0f, 1.0f,-1.0f,0.0f,
				-1.0f, 1.0f,-1.0f,0.0f,

                //Wall 2
				-1.0f,-1.0f, 1.0f,0.0f,
				1.0f, 1.0f, 1.0f,0.0f,
				1.0f,-1.0f, 1.0f,0.0f,

				-1.0f,-1.0f, 1.0f,0.0f,
				-1.0f, 1.0f, 1.0f,0.0f,
				1.0f, 1.0f, 1.0f,0.0f,


				//Wall 3
				-1.0f,-1.0f,-1.0f,0.0f,
				1.0f,-1.0f, 1.0f,0.0f,
				1.0f,-1.0f,-1.0f,0.0f,

				-1.0f,-1.0f,-1.0f,0.0f,
				-1.0f,-1.0f, 1.0f,0.0f,
				1.0f,-1.0f, 1.0f,0.0f,

				//Wall 4
				-1.0f, 1.0f, 1.0f,0.0f,
				1.0f, 1.0f,-1.0f,0.0f,
				1.0f, 1.0f, 1.0f,0.0f,

				-1.0f, 1.0f, 1.0f,0.0f,
				-1.0f, 1.0f,-1.0f,0.0f,
				1.0f, 1.0f,-1.0f,0.0f,

				//Wall 5
				-1.0f,-1.0f,-1.0f,0.0f,
				-1.0f, 1.0f, 1.0f,0.0f,
				-1.0f,-1.0f, 1.0f,0.0f,

				-1.0f,-1.0f,-1.0f,0.0f,
				-1.0f, 1.0f,-1.0f,0.0f,
				-1.0f, 1.0f, 1.0f,0.0f,

                //Wall 6
				1.0f,-1.0f, 1.0f,0.0f,
				1.0f, 1.0f,-1.0f,0.0f,
				1.0f,-1.0f,-1.0f,0.0f,

				1.0f,-1.0f, 1.0f,0.0f,
				1.0f, 1.0f, 1.0f,0.0f,
				1.0f, 1.0f,-1.0f,0.0f,
			};

			float myCubeTexCoords[]={
				//Wall 1
				1.0f,1.0f, 0.0f,0.0f, 0.0f,1.0f,
				1.0f,1.0f, 1.0f,0.0f, 0.0f,0.0f,

				//Wall 2
				1.0f,1.0f, 0.0f,0.0f, 0.0f,1.0f,
				1.0f,1.0f, 1.0f,0.0f, 0.0f,0.0f,

				//Wall 3
				1.0f,1.0f, 0.0f,0.0f, 0.0f,1.0f,
				1.0f,1.0f, 1.0f,0.0f, 0.0f,0.0f,

				//Wall 4
				1.0f,1.0f, 0.0f,0.0f, 0.0f,1.0f,
				1.0f,1.0f, 1.0f,0.0f, 0.0f,0.0f,

				//Wall 5
				1.0f,1.0f, 0.0f,0.0f, 0.0f,1.0f,
				1.0f,1.0f, 1.0f,0.0f, 0.0f,0.0f,

				//Wall 6
				1.0f,1.0f, 0.0f,0.0f, 0.0f,1.0f,
				1.0f,1.0f, 1.0f,0.0f, 0.0f,0.0f,
			};

			float myCubeC1[] = {
				//Wall 1
				1.000000f,-0.000000f,0.000000f,0.000000f,
				1.000000f,-0.000000f,0.000000f,0.000000f,
				1.000000f,-0.000000f,0.000000f,0.000000f,
				1.000000f,-0.000000f,0.000000f,0.000000f,
				1.000000f,-0.000000f,0.000000f,0.000000f,
				1.000000f,-0.000000f,0.000000f,0.000000f,
				//Wall 2
				-1.000000f,-0.000000f,0.000000f,0.000000f,
				-1.000000f,-0.000000f,0.000000f,0.000000f,
				-1.000000f,-0.000000f,0.000000f,0.000000f,
				-1.000000f,-0.000000f,0.000000f,0.000000f,
				-1.000000f,-0.000000f,0.000000f,0.000000f,
				-1.000000f,-0.000000f,0.000000f,0.000000f,

				//Wall 3
				-1.000000f,-0.000000f,0.000000f,0.000000f,
				-1.000000f,-0.000000f,0.000000f,0.000000f,
				-1.000000f,-0.000000f,0.000000f,0.000000f,
				-1.000000f,-0.000000f,0.000000f,0.000000f,
				-1.000000f,-0.000000f,0.000000f,0.000000f,
				-1.000000f,-0.000000f,0.000000f,0.000000f,
				//Wall 4
				-1.000000f,0.000000f,-0.000000f,0.000000f,
				-1.000000f,0.000000f,-0.000000f,0.000000f,
				-1.000000f,0.000000f,-0.000000f,0.000000f,
				-1.000000f,-0.000000f,0.000000f,0.000000f,
				-1.000000f,-0.000000f,0.000000f,0.000000f,
				-1.000000f,-0.000000f,0.000000f,0.000000f,

				//Wall 5
				0.000000f,-0.000000f,-1.000000f,0.000000f,
				0.000000f,-0.000000f,-1.000000f,0.000000f,
				0.000000f,-0.000000f,-1.000000f,0.000000f,
				0.000000f,-0.000000f,-1.000000f,0.000000f,
				0.000000f,-0.000000f,-1.000000f,0.000000f,
				0.000000f,-0.000000f,-1.000000f,0.000000f,

				//Wall 6
				0.000000f,0.000000f,1.000000f,0.000000f,
				0.000000f,0.000000f,1.000000f,0.000000f,
				0.000000f,0.000000f,1.000000f,0.000000f,
				0.000000f,-0.000000f,1.000000f,0.000000f,
				0.000000f,-0.000000f,1.000000f,0.000000f,
				0.000000f,-0.000000f,1.000000f,0.000000f,

			};
			float myCubeC2[] = {
				//Wall 1
				-0.000000f,-1.000000f,-0.000000f,0.000000f,
				-0.000000f,-1.000000f,-0.000000f,0.000000f,
				-0.000000f,-1.000000f,-0.000000f,0.000000f,
				-0.000000f,-1.000000f,-0.000000f,0.000000f,
				-0.000000f,-1.000000f,-0.000000f,0.000000f,
				-0.000000f,-1.000000f,-0.000000f,0.000000f,
				//Wall 2
				-0.000000f,-1.000000f,-0.000000f,0.000000f,
				-0.000000f,-1.000000f,-0.000000f,0.000000f,
				-0.000000f,-1.000000f,-0.000000f,0.000000f,
				-0.000000f,-1.000000f,-0.000000f,0.000000f,
				-0.000000f,-1.000000f,-0.000000f,0.000000f,
				-0.000000f,-1.000000f,-0.000000f,0.000000f,

				//Wall 3
				-0.000000f,0.000000f,-1.000000f,0.000000f,
				-0.000000f,0.000000f,-1.000000f,0.000000f,
				-0.000000f,0.000000f,-1.000000f,0.000000f,
				-0.000000f,0.000000f,-1.000000f,0.000000f,
				-0.000000f,0.000000f,-1.000000f,0.000000f,
				-0.000000f,0.000000f,-1.000000f,0.000000f,
				//Wall 4
				-0.000000f,0.000000f,1.000000f,0.000000f,
				-0.000000f,0.000000f,1.000000f,0.000000f,
				-0.000000f,0.000000f,1.000000f,0.000000f,
				0.000000f,0.000000f,1.000000f,0.000000f,
				0.000000f,0.000000f,1.000000f,0.000000f,
				0.000000f,0.000000f,1.000000f,0.000000f,

				//Wall 5
				-0.000000f,-1.000000f,0.000000f,0.000000f,
				-0.000000f,-1.000000f,0.000000f,0.000000f,
				-0.000000f,-1.000000f,0.000000f,0.000000f,
				0.000000f,-1.000000f,-0.000000f,0.000000f,
				0.000000f,-1.000000f,-0.000000f,0.000000f,
				0.000000f,-1.000000f,-0.000000f,0.000000f,
				//Wall 6
				-0.000000f,-1.000000f,-0.000000f,0.000000f,
				-0.000000f,-1.000000f,-0.000000f,0.000000f,
				-0.000000f,-1.000000f,-0.000000f,0.000000f,
				-0.000000f,-1.000000f,-0.000000f,0.000000f,
				-0.000000f,-1.000000f,-0.000000f,0.000000f,
				-0.000000f,-1.000000f,-0.000000f,0.000000f,

			};
			float myCubeC3[] = {
				//Wall 1
				0.000000f,0.000000f,-1.000000f,0.000000f,
				0.000000f,0.000000f,-1.000000f,0.000000f,
				0.000000f,0.000000f,-1.000000f,0.000000f,
				0.000000f,-0.000000f,-1.000000f,0.000000f,
				0.000000f,-0.000000f,-1.000000f,0.000000f,
				0.000000f,-0.000000f,-1.000000f,0.000000f,
				//Wall 2
				0.000000f,-0.000000f,1.000000f,0.000000f,
				0.000000f,-0.000000f,1.000000f,0.000000f,
				0.000000f,-0.000000f,1.000000f,0.000000f,
				0.000000f,-0.000000f,1.000000f,0.000000f,
				0.000000f,-0.000000f,1.000000f,0.000000f,
				0.000000f,-0.000000f,1.000000f,0.000000f,

				//Wall 3
				0.000000f,-1.000000f,0.000000f,0.000000f,
				0.000000f,-1.000000f,0.000000f,0.000000f,
				0.000000f,-1.000000f,0.000000f,0.000000f,
				0.000000f,-1.000000f,0.000000f,0.000000f,
				0.000000f,-1.000000f,0.000000f,0.000000f,
				0.000000f,-1.000000f,0.000000f,0.000000f,
				//Wall 4
				0.000000f,1.000000f,0.000000f,0.000000f,
				0.000000f,1.000000f,0.000000f,0.000000f,
				0.000000f,1.000000f,0.000000f,0.000000f,
				0.000000f,1.000000f,0.000000f,0.000000f,
				0.000000f,1.000000f,0.000000f,0.000000f,
				0.000000f,1.000000f,0.000000f,0.000000f,


				//Wall 5
				-1.000000f,-0.000000f,0.000000f,0.000000f,
				-1.000000f,-0.000000f,0.000000f,0.000000f,
				-1.000000f,-0.000000f,0.000000f,0.000000f,
				-1.000000f,-0.000000f,0.000000f,0.000000f,
				-1.000000f,-0.000000f,0.000000f,0.000000f,
				-1.000000f,-0.000000f,0.000000f,0.000000f,

				//Wall 6
				1.000000f,-0.000000f,0.000000f,0.000000f,
				1.000000f,-0.000000f,0.000000f,0.000000f,
				1.000000f,-0.000000f,0.000000f,0.000000f,
				1.000000f,-0.000000f,0.000000f,0.000000f,
				1.000000f,-0.000000f,0.000000f,0.000000f,
				1.000000f,-0.000000f,0.000000f,0.000000f,


			};

void drawCube(ShaderProgram *sp, int i)
{
    float* verts=myCubeVertices;
    float* normals=myCubeNormals;
    float* colors=myCubeColors;
    int vertexCount=myCubeVertexCount;


        glm::mat4 M=glm::mat4(1.0f);
        M=glm::translate(M,glm::vec3(float(i)*float(i),0.0f,0.0f));

        glUniformMatrix4fv(sp->u("M"),1,false,glm::value_ptr(M));


        glEnableVertexAttribArray(sp->a("vertex")); //Enable sending data to the attribute vertex
        glVertexAttribPointer(sp->a("vertex"),4,GL_FLOAT,false,0,verts); //Specify source of the data for the attribute vertex

        glEnableVertexAttribArray(sp->a("normal")); //Enable sending data to the attribute normal
        glVertexAttribPointer(sp->a("normal"),4,GL_FLOAT,false,0,normals); //Specify source of the data for the attribute vertex

        glEnableVertexAttribArray(sp->a("color")); //Enable sending data to the attribute color
        glVertexAttribPointer(sp->a("color"),4,GL_FLOAT,false,0,colors); //Specify source of the data for the attribute vertex


        glDrawArrays(GL_TRIANGLES,0,vertexCount); //Draw the object

        glDisableVertexAttribArray(sp->a("vertex")); //Disable sending data to the attribute vertex
        glDisableVertexAttribArray(sp->a("normal")); //Disable sending data to the attribute normal
        glDisableVertexAttribArray(sp->a("color")); //Disable sending data to the attribute color
}

#endif // MYCUBE_H_INCLUDED