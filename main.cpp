#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include<windows.h>


using namespace std;


void init()
{
    glClearColor(0.0,0.5,0.8,1.0);
	gluOrtho2D(0.0,1280,0.0,720);
}

void Land()
{
	glColor3ub(0,130, 50);
	glBegin(GL_QUADS);
    glVertex2i(0, 170);///BottomLeft
    glVertex2i(1280, 150);///BottomRight
	glVertex2i(1280, 450);///TopRight
	glVertex2i(0, 450);///TopLeft
	glEnd();
}
void Sky(){
    glColor3ub(45, 139, 237);
	glBegin(GL_QUADS);
    glVertex2i(0, 720);
    glVertex2i(1280, 720);
	glVertex2i(1280, 100);
	glVertex2i(0, 100);
	glEnd();
}
void River()
{
    glColor3ub(0,180,250);///color
    glBegin(GL_QUADS);
    glVertex2i(0, 170);///TopLeft
    glVertex2i(1280, 150);///TopRight
	glVertex2i(1280, 0);///BottomRight
	glVertex2i(0, 0);///BottomLeft
	glEnd();
}

void Hill()
{
    glColor3ub(112,77, 12);
    glBegin(GL_QUADS);
    glVertex2i(0,450);
    glVertex2i(0,500);
    glVertex2i(100,550);
    glVertex2i(200,450);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(100,450);
    glVertex2i(300,650);
    glVertex2i(500,450);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(260,450);
    glVertex2i(500,630);
    glVertex2i(700,450);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(480,450);
    glVertex2i(750,630);
    glVertex2i(1100,450);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(800,450);
    glVertex2i(1000,650);
    glVertex2i(1200,450);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(1000,500);
    glVertex2i(1200,650);
    glVertex2i(1270,450);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(1100,450);
    glVertex2i(1280,580);
    glVertex2i(1280,450);
    glEnd();
}

void Sun()
{
    glPushMatrix();
    glTranslatef(600,660, 0);
    glBegin(GL_POLYGON);
    glColor3ub(249,215,28);
for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
   glEnd();
   glPopMatrix();
}

void HighWay()
{
    ///main road
    glColor3ub(66, 66, 49);
	glBegin(GL_QUADS);
	glVertex2i(0,250);
	glVertex2i(1280,250);
	glVertex2i(1280,200);
	glVertex2i(0,200);
	glEnd();

    ///sub road 1
	glColor3ub(66, 66, 49);
	glBegin(GL_QUADS);
	glVertex2i(300,250);
	glVertex2i(330-10,250);
	glVertex2i(300-10,450);
	glVertex2i(270,450);
	glEnd();

    ///sub road 2
    glColor3ub(66, 66, 49);
	glBegin(GL_QUADS);
	glVertex2i(940,450);
	glVertex2i(960,450);
	glVertex2i(960,250);
	glVertex2i(940,250);
	glEnd();

    ///divider
	glColor3ub(255, 255, 255);
	glBegin(GL_LINES);
	glVertex2i(0,222);
	glVertex2i(1280,222);
	glVertex2i(0,225);
	glVertex2i(1280,225);
	glEnd();

}

void RoadLights1()
{
    float a;
	for(a=0; a<=1280; a+=70)
    {
        float b=a+3;
        glColor3ub(0, 0, 0);
        glBegin(GL_QUADS);
        glVertex2i(a,200);
        glVertex2i(b,200);
        glVertex2i(b,218);
        glVertex2i(a,218);
        glEnd();
        glColor3ub(255, 255, 255);
        glBegin(GL_QUADS);
        glVertex2i(a,218);
        glVertex2i(b,218);
        glVertex2i(b,223);
        glVertex2i(a,223);
        glEnd();
    }
}

void RoadLights2()
{
	float a;
	for(a=35; a<=1280; a+=70)
    {
        float b=a+3;
        glColor3ub(0, 0, 0);
        glBegin(GL_QUADS);
        glVertex2i(a,250);
        glVertex2i(b,250);
        glVertex2i(b,268);
        glVertex2i(a,268);
        glEnd();
        glColor3ub(255, 255, 255);
        glBegin(GL_QUADS);
        glVertex2i(a,268);
        glVertex2i(b,268);
        glVertex2i(b,273);
        glVertex2i(a,273);
        glEnd();
    }
}

void Building()
{
        int a= 20;
        int b= 100;
        ///first floor
        int color[3]={38, 96, 153};
        glColor3ub(color[0],color[1],color[2]);
        glBegin(GL_QUADS);
        glVertex2i(a,280);
        glVertex2i(b,280);
        glVertex2i(b,320);
        glVertex2i(a,320);
        glEnd();
        glColor3ub(225,225,225);
        glBegin(GL_QUADS);
        glVertex2i(a+20,280);
        glVertex2i(b-20,280);
        glVertex2i(b-20,300);
        glVertex2i(a+20,300);
        glEnd();
        ///second floor
        glColor3ub(color[0],color[1],color[2]);
        glBegin(GL_QUADS);
        glVertex2i(a+5,320);
        glVertex2i(b-5,320);
        glVertex2i(b-5,360);
        glVertex2i(a+5,360);
        glEnd();
        ///third floor
        glColor3ub(color[0],color[1],color[2]);
        glBegin(GL_QUADS);
        glVertex2i(a+10,360);
        glVertex2i(b-10,360);
        glVertex2i(b-10,400);
        glVertex2i(a+10,400);
        glEnd();
        ///fourth floor
        glColor3ub(color[0],color[1],color[2]);
        glBegin(GL_QUADS);
        glVertex2i(a+15,400);
        glVertex2i(b-15,400);
        glVertex2i(b-15,440);
        glVertex2i(a+15,440);
        glEnd();
        glColor3ub(200,200,200);
        glBegin(GL_QUADS);
        glVertex2i(a+39,440);
        glVertex2i(b-39,440);
        glVertex2i(b-39,470);
        glVertex2i(a+39,470);
        glEnd();


}

void Display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	Sky();
    Land();
    Sun();
    Hill();
    River();
    Building();
    HighWay();
    RoadLights1();
    RoadLights2();


    glFlush();
}

int main(int argc,char **argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(1280, 720);
	glutCreateWindow("Urban Landscape");
	glutDisplayFunc(Display);
    init();

	glutMainLoop();
	return 0;
}

