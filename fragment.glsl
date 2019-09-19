#version 330


//Varying variables
in vec4 l0;
in vec4 l1;
in vec4 n;
in vec4 v;
in vec2 iTexCoord0;

uniform sampler2D textureMap0;
uniform sampler2D specularMap0;

out vec4 pixelColor; //Fragment shader output variable

void main(void) {
    vec4 kd=texture(textureMap0,iTexCoord0); //Material color for a diffused light
    vec4 ld=vec4(1,1,1,1); //Color of the diffused light
    vec4 ks=texture(specularMap0,iTexCoord0); //Material color for a reflected light
    vec4 ls=vec4(1,1,1,1); //Color of the reflected light

    vec4 ml0=normalize(l0);
    vec4 ml1=normalize(l1);
    vec4 mn=normalize(n);
    vec4 mv=normalize(v);
    vec4 mr0=reflect(-ml0,mn); //Reflection direction vector in the eye space
    vec4 mr1=reflect(-ml1,mn);

    float nl=clamp(clamp(dot(mn,ml0),0,1)+clamp(dot(mn,ml1),0,1),0,1); //cosine of the angle between n and l vectors
    float rv=clamp(pow(clamp(dot(mr0,mv),0,1),25)+pow(clamp(dot(mr1,mv),0,1),25),0,1); //cosine of the angle between r and v vectors to the power of Phong exponent

	pixelColor=vec4(kd.rgb*ld.rgb*nl+ks.rgb*ls.rgb*rv,kd.a);
}
