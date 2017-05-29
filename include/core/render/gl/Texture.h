/*
Palette3D
Licensed under the terms of the MIT License (see LICENSE.txt)
*/

#ifndef _CORE_RENDER_GL_TEXTURE_
#define _CORE_RENDER_GL_TEXTURE_


#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>
#include <gl\glew.h>
#include <iostream>
namespace Palette3D
{

	class GlTexture
	{
	private:
		GLuint mTex;
	public:
		GlTexture(GLchar * filename);
		~GlTexture();

	
	};



}



#endif