#pragma once
#include <GL/glew.h>


//Debug Marco starts
#define ASSERT(x) if(!(x))  __debugbreak(); //" the '__' 2 underscores means this is specific to MSVC complier, won't work to other complier "
#define GLCall(x) GLClearError();\
    x;\
    ASSERT(GLLogCall(#x, __FILE__, __LINE__))
//Debug Macro Ends

//Debug Functions start
void GLClearError();
bool GLLogCall(const char* function, const char* file, int line);
//Debug Functions end