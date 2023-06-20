#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

#include <math.h>

static GLfloat spin = 0.0;
static float	tx	=  0.0; ///Musical Symbol
static float	ty	=  0.0; ///Musical Symbol
static float	t	=  0.0; ///Tata's Tears
static float	tt	=  0.0; ///Tata's Tears
static float	sx	=  0.0; ///Shooky
static float	sy	=  0.0; ///Shooky

float p = 0.0;



///float p=0.0;
void DrawCir1(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawCir2(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawCir3(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawCir4(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawCir5(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}
void DrawCir6(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawCir7(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawCloud(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawSCir1(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawSCir2(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawSCir3(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawSCir4(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}


void DrawSCir5(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawRSCir1(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();

}

void DrawRSCir2(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawRSCir3(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawRSCir4(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawRJH1(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawRJH2(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawRJH3(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawRJH4(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawRJH5(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}
void DrawRJH6(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawRJH7(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawRJRE(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawRJLE(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawRJRB(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawRJLB(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawRJN(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawRJMou(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments/2; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}


void DrawTata1(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawTata2(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawTataRE(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawTataLE(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawTear(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawTaTaMou(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawShooky(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawShoHands1(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawShoHands2(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawShoMou(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments/2; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawkoyLEar(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawkoyREar(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawkoyLIEar(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawkoyRIar(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawKoya(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawKoyaHand(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawKoyaNose(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawKoyaMou(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawKookyLEar(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawKookyLIEar(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawkookyREar(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawkookyRIEar(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void Drawkooky(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawC1(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawC2(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawC3(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}


void init(void)
{
	 glClearColor (0.0, 1.0, 0.7, 0.0);///Sky
	 glOrtho(-80.0, 80.0, -80.0, 80.0, -1.0, 1.0);
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();

     if(p <= 104){
        p = p + 0.5;
     }
     else{
        p = 0.0;
     }

    ///Cloud
    glutPostRedisplay();
    glColor3f(1.0, 1.0, 1.0);///WHITE
    DrawCir1(-49.0+p, 64.0, 8, 3, 5000);
    DrawCir2(-39.5+p, 66.0, 2.5, 2, 5000);
    DrawCir3(-37.0+p, 69.0, 2, 2, 5000);
    DrawCir4(-40.0+p, 70.0, 3, 3, 5000);
    DrawCir5(-46.0+p, 72.5, 4, 2.5, 5000);
    DrawCir6(-52.5+p, 72.0, 3.5, 3, 5000);
    DrawCir7(-56.0+p, 68.0, 3, 3, 5000);

    glColor3f(1.0, 1.0, 1.0);///WHITE
    glBegin(GL_QUADS);
        glVertex2d(-39.5+p, 66.0);
        glVertex2d(-46.0+p, 72.5);
        glVertex2d(-56.0+p, 68.0);
        glVertex2d(-49.0+p, 64.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);///WHITE
    glBegin(GL_TRIANGLES);
        glVertex2d(-40.0+p, 70.0);
        glVertex2d(-46.0+p, 72.5);
        glVertex2d(-49.0+p, 64.0);
    glEnd();

    glPopMatrix();

    ///Single Cloud
    glColor3f(1.0, 1.0, 1.0);///WHITE
    DrawCloud(-32.0-p, 62.0, 5, 3, 5000);

    ///Left Side Grass
   glColor3f(0.0, 0.7, 0.2);///Light green
    glBegin(GL_TRIANGLES);
        glVertex2d(-50.0, 45.0);
        glVertex2d(-80.0, 60.5);
        glVertex2d(-80.0, 40.0);
    glEnd();

   glColor3f(0.0, 0.7, 0.2);///Light green
    DrawSCir1(-77.5, 60.0, 5.5, 4, 5000);
    DrawSCir2(-69.0, 57.5, 5, 5.5, 5000);
    DrawSCir3(-63.0, 54.5, 4, 4.5, 5000);
    DrawSCir4(-57.0, 49.5, 4, 3.5, 5000);
    DrawSCir5(-51.5, 47.5, 3.5, 2.5, 5000);

    ///Right Side Grass
   glColor3f(0.0, 0.7, 0.2);///Light green
    glBegin(GL_QUADS);
        glVertex2d(80.0, 80.0);
        glVertex2d(20.0,80.0);
        glVertex2d(20.0, 45.0);
        glVertex2d(80.0, 45.0);
    glEnd();

    glColor3f(0.0, 0.7, 0.2);///Light green
    glBegin(GL_QUADS);
        glVertex2d(40.0, 45.0);
        glVertex2d(2.5, 56.0);
        glVertex2d(-6.0, 54.0);
        glVertex2d(-15.0, 45.0);
    glEnd();

    glColor3f(0.0, 0.7, 0.2);///Light green
    glBegin(GL_TRIANGLES);
        glVertex2d(40.0, 45.0);
        glVertex2d(16.0, 60.0);
        glVertex2d(2.5, 56.0);
    glEnd();

    glColor3f(0.0, 0.7, 0.2);///Light green
    DrawRSCir1(16.0, 60.0, 7, 7, 5000);
    DrawRSCir2(2.5, 56.0, 7, 5, 5000);
    DrawRSCir3(-6.0, 54.0, 5, 3, 5000);
    DrawRSCir4(-13, 49.0, 5, 6, 5000);

    ///Tree
    glColor3f(0.6, 0.4, 0.0); ///wood
    glBegin(GL_QUADS);
        glVertex2d(18,58);
        glVertex2d(13,58);
        glVertex2d(13,45);
        glVertex2d(18,45);
    glEnd();

    glColor3f(0.3, 0.4, 0.1);///Green
    glBegin(GL_QUADS);
        glVertex2d(28,58);
        glVertex2d(24,66);
        glVertex2d(7,66);
        glVertex2d(3,58);
    glEnd();

    glColor3f(0.3, 0.4, 0.1);///Green
    glBegin(GL_QUADS);
        glVertex2d(28,66);
        glVertex2d(25,75);
        glVertex2d(10,75);
        glVertex2d(5,66);
    glEnd();

    glColor3f(0.3, 0.4, 0.1);///Green
    glBegin(GL_QUADS);
        glVertex2d(27,75);
        glVertex2d(25,80);
        glVertex2d(10,80);
        glVertex2d(8,75);
    glEnd();

    ///Grass
    glColor3f(0.1, 0.9, 0.4);///Lightest Green
    glBegin(GL_QUADS);
        glVertex2d(80.0,49.0);
        glVertex2d(-80.0,45.0);
        glVertex2d(-80.0,-3.0);
        glVertex2d(80.0,-2.0);
    glEnd();

    ///RJ's Head
    glColor3f(1.0, 1.0, 1.0);///WHITE
    DrawRJH1(-47.5, 24.0, 3, 3, 5000);
    DrawRJH2(-47.5, 30.0, 3, 3, 5000);
    DrawRJH3(-42.5, 32.5, 3, 3, 5000);
    DrawRJH4(-37.5, 32.5, 3, 3, 5000);
    DrawRJH5(-34.5, 29.5, 3, 3, 5000);
    DrawRJH6(-34.0, 24.5, 3, 3, 5000);
    DrawRJH7(-34.0, 20.5, 3, 2.5, 5000);

    /// RJ's Head square
    glColor3f(1.0, 1.0, 1.0);///WHITE
    glBegin(GL_QUADS);
    glVertex2d(-34.0,19.0);
    glVertex2d(-35.5,33.5);
    glVertex2d(-47.5,30.0);
    glVertex2d(-49.0,17.0);
    glEnd();

    /// RJ's Body
    glColor3f(1.0, 1.0, 1.0);///WHITE
    glBegin(GL_QUADS);
    glVertex2d(-22.0,14.0);
    glVertex2d(-49.0,22.5);
    glVertex2d(-49.0,-3.0);
    glVertex2d(-20.0,-3.0);
    glEnd();

    ///RJ's Right Eyes
    glColor3f(0.0, 0.0, 0.0);///Black
    DrawRJRE(-38.5, 27.0, 0.5, 1, 50);

    ///RJ's Left Eyes
    glColor3f(0.0, 0.0, 0.0);///Black
    DrawRJLE(-41.5, 27.0, 0.5, 1, 50);

    ///RJ's Right EyeBrows
    glColor3f(0.0, 0.0, 0.0);///Black
    glBegin(GL_LINES);
    glVertex2d(-39.0,30.0);
    glVertex2d(-36.0,28.0);
    glEnd();

    ///RJ's LEFt Eyebrows
    glColor3f(0.0, 0.0, 0.0);///Black
    glBegin(GL_LINES);
    glVertex2d(-41.0,30.0);
    glVertex2d(-44.0,28.0);
    glEnd();

    ///RJ's Blush
    glColor3f(1.0, 0.4, 0.3);///Light Red
    DrawRJRB(-36.0, 25.5, 1, 0.5, 5000);
    DrawRJLB(-44.0, 25.5, 1, 0.5, 5000);

    ///RJ's Nose
    glColor3f(0.0, 0.0, 0.0);///Black
    DrawRJN(-40.0, 24.0, 0.5, 0.5, 5);

    ///RJ's Mouth
    glColor3f(0.0, 0.0, 0.0);///Black
    DrawRJMou(-40.0, 22, 2, -1, 50);

    glColor3f(0.0, 0.0, 0.0);///Black
    glBegin(GL_LINES);
    glVertex2d(-40.0, 24.0);
    glVertex2d(-40.0, 22);
    glEnd();

    /// RJ's scarf
    glColor3f(0.9, 0.0, 0.0);///Red
    glBegin(GL_QUADS);
    glVertex2d(-33.7,18.0);
    glVertex2d(-45.0,18.0);
    glVertex2d(-44.0,15.0);
    glVertex2d(-39.0,13);
    glEnd();

    ///TaTa
    /// TaTa's Head
    glColor3f(1.0, 0.0, 0.1);///Red
    DrawTata1(-51.0, 14.0, 7.0, 8.5, 5000);
    DrawTata2(-63.0, 9.5, 7.0, 5.5, 5000);

    glColor3f(1.0, 0.0, 0.1);///Red
    glBegin(GL_QUADS);
    glVertex2d(-69.5,7.0);
    glVertex2d(-62.0,-3.0);
    glVertex2d(-46.0,-3.0);
    glVertex2d(-44.0,10.0);
    glEnd();

    ///TaTa's Eyes
    glColor3f(0.0, 0.0, 0.0);///Black
    DrawTataRE(-54.5, 7, 0.5, 1, 5000);
    DrawTataLE(-58.5, 5, 0.5, 1, 5000);

    ///TaTa's Tear
    glPushMatrix();
     glTranslatef(t,tt,0);
    glColor3f(1.0, 1.0, 1.0);///White
    DrawTear(-58.5, 3.5, 0.5, 0.5, 5);
    DrawTear(-58.5, 2.0, 0.5, 0.5, 5);
    DrawTear(-58.5, 0.5, 0.5, 0.5, 5);
     glPopMatrix();

    ///TaTa's Left Eyebrows
    glColor3f(0.0, 0.0, 0.0);///Black
    glBegin(GL_LINES);
    glVertex2d(-59.5, 7.0);
    glVertex2d(-61.0, 5.0);
    glEnd();


    ///TaTa's Right Eyebrows
    glColor3f(0.0, 0.0, 0.0);///Black
    glBegin(GL_LINES);
    glVertex2d(-53.0, 11.0);
    glVertex2d(-56.0, 9.0);
    glEnd();

    ///TaTa's Mouth
    glColor3f(0.9, 1.0, 0.3);///Light Yellow
    DrawTaTaMou(-55.5, 2.0, 1.5, 2.0, 500);

    glColor3f(0.0, 0.0, 0.0);///Black
    glBegin(GL_LINES);
    glVertex2d(-55.0, 3.0);
    glVertex2d(-56.5, 1.0);
    glEnd();

    ///koya's Left Ears
    glColor3f(0.0, 1.0, 1.0);///Sky Blue
    DrawkoyLEar(-24,13.5,4,4.5,5000);
    glColor3f(0.7, 1.0, 1.0);///Light Sky Blue
    DrawkoyLIEar(-24,13.5,2,2.5,5000);

    ///koya's Right Ears
    glColor3f(0.0, 1.0, 1.0);///Sky Blue
    DrawkoyREar(-8,13.5,4,4.5,5000);
    glColor3f(0.7, 1.0, 1.0);///Light Sky Blue
    DrawkoyRIar(-8,13.5,2,2.5,5000);

    ///Koya's Body
    glColor3f(0.2, 1.0, 1.0);///Sky Blue
    DrawKoya(-16,6,11,11,5000);

    ///Koya's Hand
    glColor3f(0.2, 0.9, 0.9);///Sky Blue
    DrawKoyaHand(-25,-2,4,5,5000);

    ///Koya's Nose
    glColor3f(0.2, 0.2, 0.8);///Dark Blue
    DrawKoyaNose(-16,6,2,3,5000);

    ///koya's Mouth
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);///Black
    DrawKoyaMou(-15.5,0,1,1,5000);
    glPopMatrix();

    ///Koya's Right Eyes
    glColor3f(0.0, 0.0, 0.0);///Black
    glBegin(GL_LINES);
    glVertex2d(-10.0,10.0);
    glVertex2d(-13.0,10.0);
    glEnd();

    ///Koya's Left EyeBrows
    glColor3f(0.0, 0.0, 0.0);///Black
    glBegin(GL_LINES);
    glVertex2d(-19.0,10.0);
    glVertex2d(-22.0,10.0);
    glEnd();

    /// Shooky
    /// Shooky's body
    glPushMatrix();
    glTranslatef(sx,sy,0);
    glColor3f(0.7, 0.3, 0.0);///Light Brown
    DrawShooky(-44.5,2.5,7.5,7.5,5000);

    ///Shook's Mouth
    glColor3f(0.4, 0.1, 0.0);///Dark Brown
    DrawShoMou(-44.5, 2.0, 2.5, -2.0, 5000);


    glColor3f(1.0, 1.0, 1.0);///White
    glBegin(GL_QUADS);
    glVertex2d(-43.5,2.0);
    glVertex2d(-45.5,2.0);
    glVertex2d(-45.5,1.0);
    glVertex2d(-43.5,1.0);
    glEnd();

    ///Shook's Right Eye
    glColor3f(0.0, 0.0, 0.0);///Black
    glBegin(GL_LINES);
    glVertex2d(-41.0,6.0);
    glVertex2d(-42.5,4.5);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);///Black
    glBegin(GL_LINES);
    glVertex2d(-42.5,4.5);
    glVertex2d(-41.0,4.0);
    glEnd();

    ///Shook's Right EyeBrows
    glColor3f(0.0, 0.0, 0.0);///Black
    glBegin(GL_LINES);
    glVertex2d(-42.5,7.0);
    glVertex2d(-44.0,5.5);
    glEnd();

    ///Shook's Left Eye
    glColor3f(0.0, 0.0, 0.0);///Black
    glBegin(GL_LINES);
    glVertex2d(-46.0,4.5);
    glVertex2d(-48.0,6.0);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);///Black
    glBegin(GL_LINES);
    glVertex2d(-46.0,4.5);
    glVertex2d(-48.0,4.0);
    glEnd();

    ///Shook's Left EyeBrows
    glColor3f(0.0, 0.0, 0.0);///Black
    glBegin(GL_LINES);
    glVertex2d(-46.0,6.0);
    glVertex2d(-48.0,7.5);
    glEnd();

    /// Shooky's hands
    glColor3f(0.4, 0.1, 0.0);///Dark Brown
    DrawShoHands1(-37.5,3.0,1.5,2.0,5000);
    DrawShoHands2(-51.0,1.0,2.0,2.0,5000);
    glPopMatrix();

    /*
    ///Kooky
    glColor3f(1.0, 0.5, 0.6);///Light Pink
    Drawkooky(-12,21,10,6,5000);

    /// kooky left Ear circle
    glColor3f(1.0, 0.5, 0.6);///Light Pink
    DrawKookyLEar(-15,32,3,4,5000);

    /// kooky Left Inner ear
    glColor3f(1.0, 1.0, 1.0);///White
    DrawKookyLIEar(-15,32,1.5,2,5000);

    /// kooky left ear
    glColor3f(1.0, 0.5, 0.6);///Light Pink
    glBegin(GL_QUADS);
    glVertex2d(-12,32);
    glVertex2d(-18,32);
    glVertex2d(-18,26);
    glVertex2d(-12,26);
    glEnd();

    /// kooky left Inner ear
    glColor3f(1.0, 1.0, 1.0);///White
    glBegin(GL_QUADS);
    glVertex2d(-13.5,32);
    glVertex2d(-16.5,32);
    glVertex2d(-16.5,26);
    glVertex2d(-13.5,26);
    glEnd();

    /// Draw kooky Right Ear Circle
    glColor3f(1.0, 0.5, 0.6);///Light Pink
    DrawkookyREar(-9,32,3,4,5000);

    ///Kooky Inner Ear circle
    glColor3f(1.0, 1.0, 1.0);///White
    DrawkookyRIEar(-9,32,1.5,2,5000);

    /// kooky Right Ear
    glColor3f(1.0, 0.5, 0.6);///Light Pink
    glBegin(GL_QUADS);
    glVertex2d(-6,32);
    glVertex2d(-12,32);
    glVertex2d(-12,26);
    glVertex2d(-6,26);
    glEnd();

    /// kooky Right INNER Ear
    glColor3f(1.0, 1.0, 1.0);///White
    glBegin(GL_QUADS);
    glVertex2d(-7.5,32);
    glVertex2d(-10,32);
    glVertex2d(-10.5,26);
    glVertex2d(-7.5,26);
    glEnd();

    */

    ///Grass
    glColor3f(0.0, 0.7, 0.2);///Light green
    glBegin(GL_QUADS);
        glVertex2d(80.0,-20.0);
        glVertex2d(-80.0,-20.0);
        glVertex2d(-80.0,-3.0);
        glVertex2d(80.0,-2.0);
    glEnd();

    glColor3f(0.0, 0.5, 0.1);///Dark Green
    glBegin(GL_QUADS);
        glVertex2d(80.0,-20.0);
        glVertex2d(-80.0,-20.0);
        glVertex2d(-80.0,-39.0);
        glVertex2d(80.0,-37.0);
    glEnd();

    glColor3f(0.6, 1.0, 0.3);///Yellowish Grass
    glBegin(GL_QUADS);
        glVertex2d(80.0,-80.0);
        glVertex2d(-80.0,-80.0);
        glVertex2d(-80.0,-39.0);
        glVertex2d(80.0,-37.0);
    glEnd();


    ///Gift Box
    glColor3f(0.7, 0.3, 0.5);///Dark purple
    glBegin(GL_QUADS);
        glVertex2d(10.0,-30.0);
        glVertex2d(-10.0,-30.0);
        glVertex2d(-10.0,-45.0);
        glVertex2d(10.0,-45.0);
    glEnd();

    glColor3f(0.8, 0.6, 0.8);///Dark lavender
    glBegin(GL_QUADS);
        glVertex2d(2.0,-30.0);
        glVertex2d(-2.0,-30.0);
        glVertex2d(-2.0,-45.0);
        glVertex2d(2.0,-45.0);
    glEnd();

    ///Box lid
    glColor3f(0.7, 0.3, 0.6);///Light purple
    glBegin(GL_QUADS);
        glVertex2d(13.0,-25.0);
        glVertex2d(-13.0,-25.0);
        glVertex2d(-13.0,-30.0);
        glVertex2d(13.0,-30.0);
    glEnd();

    glColor3f(0.8, 0.6, 0.9);///Light lavender
    glBegin(GL_QUADS);
        glVertex2d(3.0,-25.0);
        glVertex2d(-3.0,-25.0);
        glVertex2d(-3.0,-30.0);
        glVertex2d(3.0,-30.0);
    glEnd();

    ///Musical Symbol
	glPushMatrix();
	glTranslatef(tx,ty,0);
    glColor3f(0.0,0.0,0.0);
    DrawC1(-3.5,-36,1.5 ,1 ,50);

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
        glVertex2d(0,-34);
        glVertex2d(-2,-31);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
        glVertex2d(-2,-31);
        glVertex2d(-2, -36);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    DrawC2(0.5,-40,1.5 ,1 ,50);

    glColor3f(0.0,0.0,0.0);
    DrawC3(5.5,-40,1.5 ,1 ,50);

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
        glVertex2d(7,-40);
        glVertex2d(7, -35);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
        glVertex2d(2,-35);
        glVertex2d(7, -35);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
        glVertex2d(2,-35);
        glVertex2d(2, -40);
    glEnd();

    glPopMatrix();


	glFlush();
}

void spe_key(int key, int x, int y)
{

	switch (key) {

				case GLUT_KEY_RIGHT:
				ty +=2.0; ///Musical Symbol Move UPWARD
				tt -=0.5; ///Tata's Tear move DOWNWARD
				sx +=1.0; ///Shooky Move to the RIGHT
				glutPostRedisplay();
				break;



		case GLUT_KEY_LEFT:
				ty -=2.0; ///Musical Symbol Move DOWNWARD
				tt +=0.5; ///Tata's Tear move UPWARD
				sx -=1.0; ///Shooky Move to the LEFT
				glutPostRedisplay();
				break;



	  default:
			break;
	}
}


int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (800, 800);
	glutInitWindowPosition (2, 2);
	glutCreateWindow ("BT21");
	init();
    glutDisplayFunc(display);
    glutSpecialFunc(spe_key);
	glutMainLoop();
	return 0;
}
