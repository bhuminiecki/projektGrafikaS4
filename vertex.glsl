#version 330

//Uniform variables
uniform mat4 P;
uniform mat4 V;
uniform mat4 M;
uniform vec4 lp0; //Light source coordinates in world space
uniform vec4 lp1;
//Attributes
in vec4 vertex; //vertex coordinates in model space
in vec4 normal; //normal vector coordinates in model space
in vec2 texCoord0; //texturing coordinates

//Varying variables
out vec4 l0;
out vec4 l1;
out vec4 n;
out vec4 v;
out vec2 iTexCoord0;

void main(void) {

    l0=normalize(V*(lp0-M*vertex)); //Vector "towards the light" in the eye space
    l1=normalize(V*(lp1-M*vertex));
    n=normalize(V*M*normal); //Normal vector in the eye space
    v=normalize(vec4(0,0,0,1)-V*M*vertex); //Vector "towards the viewer" in the eye space


    iTexCoord0=texCoord0; //Interpolate texturing coordinates from texCoord0 attribute

    gl_Position=P*V*M*vertex;
}
