#ifdef __APPLE__
#else
//#include <GL/glut.h>
#endif
#include <stdlib.h>
using namespace std;
#include <stdio.h>
#include<iostream>
#include <math.h>
#include <GL/glut.h>
int xc = 0, yc = 0;
int radius1;
void bresenham_circle(int xc1,int yc1,double r)
{
double x=0;
double y=r;
float pk= 3-2*r;
int k;
while(x < y)
{
x = x + 1;
if(pk <=0)
pk = pk + 4*x+6;
else
{
y = y - 1;
pk = pk + 4*(x - y) + 10;
}
glVertex2i(xc1+x,
glVertex2i(xc1+x,
glVertex2i(xc1+y,
glVertex2i(xc1+y,
glVertex2i(xc1-x,
glVertex2i(xc1-y,
glVertex2i(xc1-x,
glVertex2i(xc1-y,
}
}
yc1+y);
yc1-y);
yc1+x);
yc1-x);
yc1-y);
yc1-x);
yc1+y);
yc1+x);void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_LINES);
glVertex2i(-500,0);
glVertex2i(500,0);
glVertex2i(0,-500);
glVertex2i(0,500);
glEnd();
glBegin(GL_POINTS);
bresenham_circle(xc,yc,radius1);
glEnd();
glFlush();
}
void Init()
{
glClearColor(1.0,1.0,1.0,0);
glColor3f(0.0,1.0,0.0);
gluOrtho2D(-500.0,500.0,-500.0,500.0);
}
int main(int argc, char **argv)
{
cout<<"Enter the Radius of Inner Circle : ";
cin>>radius1;
cout<<"Enter Coordinates of Centre";
cin>>xc;
cin>>yc;
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(0,0);
glutInitWindowSize(500,500);
glutCreateWindow("bresenham_circle");
Init();
glutDisplayFunc(display);
glutMainLoop();
}
