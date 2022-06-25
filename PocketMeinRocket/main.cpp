#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255,0,0);
glPointSize(4.0);

glBegin(GL_TRIANGLES);
glVertex2i(20,250);
glVertex2i(30,270);
glVertex2i(40,250);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub (255,140,0);
glVertex2i(70,300);
glVertex2i(80,320);
glVertex2i(90,300);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub (220,110,30);
glVertex2i(170,250);
glVertex2i(180,270);
glVertex2i(190,250);
glEnd();

//head of the rocket
glBegin(GL_TRIANGLES);
glColor3ub (120,140,0);
glVertex2i(80,150);
glVertex2i(100,200);
glVertex2i(120,150);
glEnd();
//rocket body
glBegin(GL_POLYGON);
glColor3ub (10,140,0);
glVertex2i(80,70);
glVertex2i(80,150);
glVertex2i(120,150);
glVertex2i(120,70);
glEnd();
//rocket tail
glBegin(GL_POLYGON);
glColor3ub (189,49,0);
glVertex2i(100,20);
glVertex2i(70,50);
glVertex2i(80,70);
glVertex2i(120,70);
glVertex2i(130,50);
glVertex2i(100,20);
glEnd();
//tails
glBegin(GL_TRIANGLES);
glColor3ub (120,140,0);
glVertex2i(60,70);
glVertex2i(80,110);
glVertex2i(80,70);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub (120,140,0);
glVertex2i(120,70);
glVertex2i(140,70);
glVertex2i(120,110);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub (120,140,0);
glVertex2i(60,130);
glVertex2i(80,150);
glVertex2i(80,130);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub (100,140,0);
glVertex2i(120,130);
glVertex2i(120,150);
glVertex2i(140,130);
glEnd();



glutSwapBuffers();
}

void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}



int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 200);
glutCreateWindow ("This is the title");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
