#ifndef FLOOR_H_INCLUDED
#define FLOOR_H_INCLUDED

int floorVertexCount = 6;

float floorVertices[]={
                -10.0f, 0.0f, 10.0f,1.0f,
				10.0f, 0.0f,-10.0f,1.0f,
				10.0f, 0.0f, 10.0f,1.0f,

				-10.0f, 0.0f, 10.0f,1.0f,
				-10.0f, 0.0f,-10.0f,1.0f,
				10.0f, 0.0f,-10.0f,1.0f
};

float floorNormals[]={
                0.0f, 1.0f, 0.0f,0.0f,
				0.0f, 1.0f, 0.0f,0.0f,
				0.0f, 1.0f, 0.0f,0.0f,

				0.0f, 1.0f, 0.0f,0.0f,
				0.0f, 1.0f, 0.0f,0.0f,
				0.0f, 1.0f, 0.0f,0.0f
};

float floorVertexNormals[]={
                -10.0f, 0.0f, 10.0f,0.0f,
				10.0f, 0.0f,-10.0f,0.0f,
				10.0f, 0.0f, 10.0f,0.0f,

				-10.0f, 0.0f, 10.0f,0.0f,
				-10.0f, 0.0f,-10.0f,0.0f,
				10.0f, 0.0f,-10.0f,0.0f
};


float floorTexCoords[]={
				1.0f,1.0f, 0.0f,0.0f, 0.0f,1.0f,
				1.0f,1.0f, 1.0f,0.0f, 0.0f,0.0f
};

glm::mat4 drawFloor(ShaderProgram *sp, glm::vec3 translation, glm::mat4 M, GLuint tex1, GLuint spec1)
{
    float* verts=floorVertices;
    float* normals=floorNormals;
    float* texCoords=floorTexCoords;
    int vertexCount=floorVertexCount;


        //glm::mat4 M=glm::mat4(1.0f);
        M=glm::translate(M,translation);

        glUniformMatrix4fv(sp->u("M"),1,false,glm::value_ptr(M));

        glUniform1i(sp->u("textureMap0"),0);
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D,tex1);

        glUniform1i(sp->u("specularMap0"),1);
        glActiveTexture(GL_TEXTURE1);
        glBindTexture(GL_TEXTURE_2D,spec1);

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
#endif // FLOOR_H_INCLUDED
