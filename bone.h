#ifndef BONE_H_INCLUDED
#define BONE_H_INCLUDED


int boneVertexCount=36;

float boneVertices[]={
                //Wall 1
				0.0f,-0.025f,-0.025f,1.0f,
				-1.0f, 0.025f,-0.025f,1.0f,
				-1.0f,-0.025f,-0.025f,1.0f,

				0.0f,-0.025f,-0.025f,1.0f,
				0.0f, 0.025f,-0.025f,1.0f,
				-1.0f, 0.025f,-0.025f,1.0f,

                //Wall 2
				-1.0f,-0.025f, 0.025f,1.0f,
				0.0f, 0.025f, 0.025f,1.0f,
				0.0f,-0.025f, 0.025f,1.0f,

				-1.0f,-0.025f, 0.025f,1.0f,
				-1.0f, 0.025f, 0.025f,1.0f,
				0.0f, 0.025f, 0.025f,1.0f,


				//Wall 3
				-1.0f,-0.025f,-0.025f,1.0f,
				0.0f,-0.025f, 0.025f,1.0f,
				0.0f,-0.025f,-0.025f,1.0f,

				-1.0f,-0.025f,-0.025f,1.0f,
				-1.0f,-0.025f, 0.025f,1.0f,
				0.0f,-0.025f, 0.025f,1.0f,

				//Wall 4
				-1.0f, 0.025f, 0.025f,1.0f,
				0.0f, 0.025f,-0.025f,1.0f,
				0.0f, 0.025f, 0.025f,1.0f,

				-1.0f, 0.025f, 0.025f,1.0f,
				-1.0f, 0.025f,-0.025f,1.0f,
				0.0f, 0.025f,-0.025f,1.0f,

				//Wall 5
				-1.0f,-0.025f,-0.025f,1.0f,
				-1.0f, 0.025f, 0.025f,1.0f,
				-1.0f,-0.025f, 0.025f,1.0f,

				-1.0f,-0.025f,-0.025f,1.0f,
				-1.0f, 0.025f,-0.025f,1.0f,
				-1.0f, 0.025f, 0.025f,1.0f,

                //Wall 6
				0.0f,-0.025f, 0.025f,1.0f,
				0.0f, 0.025f,-0.025f,1.0f,
				0.0f,-0.025f,-0.025f,1.0f,

				0.0f,-0.025f, 0.025f,1.0f,
				0.0f, 0.025f, 0.025f,1.0f,
				0.0f, 0.025f,-0.025f,1.0f,







			};

			float boneColors[]={
                //Wall 1
				0.35f,0.35f,0.35f,1.0f,
				0.35f,0.35f,0.35f,1.0f,
				0.35f,0.35f,0.35f,1.0f,

				0.35f,0.35f,0.35f,1.0f,
				0.35f,0.35f,0.35f,1.0f,
				0.35f,0.35f,0.35f,1.0f,

				//Wall 2
				0.35f,0.35f,0.35f,1.0f,
				0.35f,0.35f,0.35f,1.0f,
				0.35f,0.35f,0.35f,1.0f,

				0.35f,0.35f,0.35f,1.0f,
				0.35f,0.35f,0.35f,1.0f,
				0.35f,0.35f,0.35f,1.0f,

				//Wall 3
				0.35f,0.35f,0.35f,1.0f,
				0.35f,0.35f,0.35f,1.0f,
				0.35f,0.35f,0.35f,1.0f,

				0.35f,0.35f,0.35f,1.0f,
				0.35f,0.35f,0.35f,1.0f,
				0.35f,0.35f,0.35f,1.0f,

				//Wall 4
				0.35f,0.35f,0.35f,1.0f,
				0.35f,0.35f,0.35f,1.0f,
				0.35f,0.35f,0.35f,1.0f,

				0.35f,0.35f,0.35f,1.0f,
				0.35f,0.35f,0.35f,1.0f,
				0.35f,0.35f,0.35f,1.0f,

				//Wall 5
				0.35f,0.35f,0.35f,1.0f,
				0.35f,0.35f,0.35f,1.0f,
				0.35f,0.35f,0.35f,1.0f,

				0.35f,0.35f,0.35f,1.0f,
				0.35f,0.35f,0.35f,1.0f,
				0.35f,0.35f,0.35f,1.0f,

				//Wall 6
				0.35f,0.35f,0.35f,1.0f,
				0.35f,0.35f,0.35f,1.0f,
				0.35f,0.35f,0.35f,1.0f,

				0.35f,0.35f,0.35f,1.0f,
				0.35f,0.35f,0.35f,1.0f,
				0.35f,0.35f,0.35f,1.0f,

			};

			float boneNormals[]={
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

			float boneVertexNormals[]={
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

			float boneTexCoords[]={
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

void drawBone(ShaderProgram *sp, glm::vec3 translation, float rotation[3])
{
    float* verts=boneVertices;
    float* normals=boneNormals;
    float* colors=boneColors;
    int vertexCount=boneVertexCount;


        glm::mat4 M=glm::mat4(1.0f);
        M=glm::translate(M,translation);
        M=glm::rotate(M,rotation[0],glm::vec3(1.0f,0.0f,0.0f)); //Compute model matrix
        M=glm::rotate(M,rotation[1],glm::vec3(0.0f,1.0f,0.0f)); //Compute model matrix
        M=glm::rotate(M,rotation[2],glm::vec3(0.0f,0.0f,1.0f)); //Compute model matrix

        glUniformMatrix4fv(sp->u("M"),1,false,glm::value_ptr(M));


        glEnableVertexAttribArray(sp->a("vertex")); //Enable sending data to the attribute vertex
        glVertexAttribPointer(sp->a("vertex"),4,GL_FLOAT,false,0,verts); //Specify source of the data for the attribute vertex

        glEnableVertexAttribArray(sp->a("normal")); //Enable sending data to the attribute normal
        glVertexAttribPointer(sp->a("normal"),4,GL_FLOAT,false,0,normals); //Specify source of the data for the attribute vertex

        glEnableVertexAttribArray(sp->a("color")); //Enable sending data to the attribute color
        glVertexAttribPointer(sp->a("color"),4,GL_FLOAT,false,0,colors); //Specify source of the data for the attribute vertex


        glDrawArrays(GL_TRIANGLES,0,boneVertexCount); //Draw the object

        glDisableVertexAttribArray(sp->a("vertex")); //Disable sending data to the attribute vertex
        glDisableVertexAttribArray(sp->a("normal")); //Disable sending data to the attribute normal
        glDisableVertexAttribArray(sp->a("color")); //Disable sending data to the attribute color
}



#endif // bone_H_INCLUDED
