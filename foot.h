#ifndef FOOT_H_INCLUDED
#define FOOT_H_INCLUDED

int footVertexCount=36;

float footVertices[]={

				0.1f,-0.025f,-0.025f,1.0f,
				-0.1f, 0.35f,-0.025f,1.0f,
				-0.1f,-0.025f,-0.025f,1.0f,

				0.1f,-0.025f,-0.025f,1.0f,
				0.1f, 0.35f,-0.025f,1.0f,
				-0.1f, 0.35f,-0.025f,1.0f,


				-0.1f,-0.025f, 0.025f,1.0f,
				0.1f, 0.35f, 0.025f,1.0f,
				0.1f,-0.025f, 0.025f,1.0f,

				-0.1f,-0.025f, 0.025f,1.0f,
				-0.1f, 0.025f, 0.025f,1.0f,
				0.1f, 0.025f, 0.025f,1.0f,



				-0.1f,-0.025f,-0.025f,1.0f,
				0.1f,-0.025f, 0.025f,1.0f,
				0.1f,-0.025f,-0.025f,1.0f,

				-0.1f,-0.025f,-0.025f,1.0f,
				-0.1f,-0.025f, 0.025f,1.0f,
				0.1f,-0.025f, 0.025f,1.0f,


				-0.1f, 0.35f, 0.025f,1.0f,
				0.1f, 0.35f,-0.025f,1.0f,
				0.1f, 0.35f, 0.025f,1.0f,

				-0.1f, 0.35f, 0.025f,1.0f,
				-0.1f, 0.35f,-0.025f,1.0f,
				0.1f, 0.35f,-0.025f,1.0f,


				-0.1f,-0.025f,-0.025f,1.0f,
				-0.1f, 0.35f, 0.025f,1.0f,
				-0.1f,-0.025f, 0.025f,1.0f,

				-0.1f,-0.025f,-0.025f,1.0f,
				-0.1f, 0.35f,-0.025f,1.0f,
				-0.1f, 0.35f, 0.025f,1.0f,


				0.1f,-0.025f, 0.025f,1.0f,
				0.1f, 0.35f,-0.025f,1.0f,
				0.1f,-0.025f,-0.025f,1.0f,

				0.1f,-0.025f, 0.025f,1.0f,
				0.1f, 0.35f, 0.025f,1.0f,
				0.1f, 0.35f,-0.025f,1.0f,













			};

						float footColors[]={
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

			float footNormals[]={
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

			float footVertexNormals[]={
				0.1f,-0.025f,-0.025f,1.0f,
				-0.1f, 0.35f,-0.025f,1.0f,
				-0.1f,-0.025f,-0.025f,1.0f,

				0.1f,-0.025f,-0.025f,1.0f,
				0.1f, 0.35f,-0.025f,1.0f,
				-0.1f, 0.35f,-0.025f,1.0f,


				-0.1f,-0.025f, 0.025f,1.0f,
				0.1f, 0.35f, 0.025f,1.0f,
				0.1f,-0.025f, 0.025f,1.0f,

				-0.1f,-0.025f, 0.025f,1.0f,
				-0.1f, 0.025f, 0.025f,1.0f,
				0.1f, 0.025f, 0.025f,1.0f,



				-0.1f,-0.025f,-0.025f,1.0f,
				0.1f,-0.025f, 0.025f,1.0f,
				0.1f,-0.025f,-0.025f,1.0f,

				-0.1f,-0.025f,-0.025f,1.0f,
				-0.1f,-0.025f, 0.025f,1.0f,
				0.1f,-0.025f, 0.025f,1.0f,


				-0.1f, 0.35f, 0.025f,1.0f,
				0.1f, 0.35f,-0.025f,1.0f,
				0.1f, 0.35f, 0.025f,1.0f,

				-0.1f, 0.35f, 0.025f,1.0f,
				-0.1f, 0.35f,-0.025f,1.0f,
				0.1f, 0.35f,-0.025f,1.0f,


				-0.1f,-0.025f,-0.025f,1.0f,
				-0.1f, 0.35f, 0.025f,1.0f,
				-0.1f,-0.025f, 0.025f,1.0f,

				-0.1f,-0.025f,-0.025f,1.0f,
				-0.1f, 0.35f,-0.025f,1.0f,
				-0.1f, 0.35f, 0.025f,1.0f,


				0.1f,-0.025f, 0.025f,1.0f,
				0.1f, 0.35f,-0.025f,1.0f,
				0.1f,-0.025f,-0.025f,1.0f,

				0.1f,-0.025f, 0.025f,1.0f,
				0.1f, 0.35f, 0.025f,1.0f,
				0.1f, 0.35f,-0.025f,1.0f,
			};

			float footTexCoords[]={
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

glm::mat4 drawFoot(ShaderProgram *sp, glm::vec3 translation, float rotation[3], glm::mat4 M, GLuint tex0, GLuint spec0)
{
    float* verts=footVertices;
    float* normals=footNormals;
    float* colors=footColors;
    float* texCoords=footTexCoords;
    int vertexCount=footVertexCount;


        //glm::mat4 M=glm::mat4(1.0f);
        M=glm::translate(M,translation);
        M=glm::rotate(M,1.57f,glm::vec3(1.0f,0.0f,0.0f));
        M=glm::rotate(M,1.57f,glm::vec3(0.0f,1.0f,0.0f));
        M=glm::rotate(M,rotation[0],glm::vec3(1.0f,0.0f,0.0f)); //Compute model matrix
        M=glm::rotate(M,rotation[1],glm::vec3(0.0f,1.0f,0.0f)); //Compute model matrix
        M=glm::rotate(M,rotation[2],glm::vec3(0.0f,0.0f,1.0f)); //Compute model matrix

        glUniformMatrix4fv(sp->u("M"),1,false,glm::value_ptr(M));

        glUniform1i(sp->u("textureMap0"),0);
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D,tex0);

        glUniform1i(sp->u("specularMap0"),1);
        glActiveTexture(GL_TEXTURE1);
        glBindTexture(GL_TEXTURE_2D,spec0);

        glEnableVertexAttribArray(sp->a("vertex")); //Enable sending data to the attribute vertex
        glVertexAttribPointer(sp->a("vertex"),4,GL_FLOAT,false,0,verts); //Specify source of the data for the attribute vertex

        glEnableVertexAttribArray(sp->a("normal")); //Enable sending data to the attribute normal
        glVertexAttribPointer(sp->a("normal"),4,GL_FLOAT,false,0,normals); //Specify source of the data for the attribute vertex

        glEnableVertexAttribArray(sp->a("texCoord0")); //Enable sending data to the attribute color
        glVertexAttribPointer(sp->a("texCoord0"),2,GL_FLOAT,false,0,texCoords); //Specify source of the data for the attribute vertex


        glDrawArrays(GL_TRIANGLES,0,vertexCount); //Draw the object

        glDisableVertexAttribArray(sp->a("vertex")); //Disable sending data to the attribute vertex
        glDisableVertexAttribArray(sp->a("normal")); //Disable sending data to the attribute normal
        glDisableVertexAttribArray(sp->a("texCoord0")); //Disable sending data to the attribute color
        return M;
}

#endif // FOOT_H_INCLUDED
