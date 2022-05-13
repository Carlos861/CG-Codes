#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include<iostream>
#include<math.h>
#include<GL/glut.h>
using namespace std;
int choice;
int x1,x2,x3,x4,yy1,y2,y3,y4,nx1,nx2,nx3,nx4,ny1,ny2,ny3,ny4,c,shx,shy;
float sx,sy,xt,yt,r;
double t;
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2i(-500,0);
glVertex2i(500,0);
glVertex2i(0,-500);
glVertex2i(0,500);
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(x1,yy1);
glVertex2f(x2,y2);
glVertex2f(x3,y3);
glVertex2f(x4,y4);
glEnd();
glColor3f(1.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(nx1,ny1);
glVertex2f(nx2,ny2);
glVertex2f(nx3,ny3);
glVertex2f(nx4,ny4);
glEnd();
glFlush();
}
void myinit()
{
glClearColor(1.0,1.0,1.0, 0);
glMatrixMode(GL_PROJECTION);glLoadIdentity();
gluOrtho2D(-500.0,500.0,-500.0,500.0);
}
int main(int argc, char **argv)
{
x1=10;
yy1=10;
x2=150;
y2=10;
x3=150;
y3=150;
x4=10;
y4=150;
cout<<"Select the Transformation to be Performed";
cout<<"\n 1.Perform Translation \n 2.Perform Rotation \n 3.Perform
Scaling \n 4.Perform Shearing \n 5.Perform Reflection(Along X axis) \n
6.Perform Reflection(Along Y axis) \n 7.Perform Reflection(Along X=-Y axis)
\n 8.Exit";
cout<<"\n Enter Your Choice= ";
cin>>c; switch(c)
{
case 1:
cout<<"Enter the Translation Factor x= ";
cin>>xt;
cout<<"Enter the Translation Factor y= ";
cin>>yt;
nx1=x1+xt;
ny1=yy1+yt;
nx2=x2+xt;
ny2=y2+yt;
nx3=x3+xt;
ny3=y3+yt;
nx4=x4+xt;
ny4=y4+yt;
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(500,500);
glutInitWindowPosition(0,0);
glutCreateWindow("Translation");
glutDisplayFunc(display);
myinit();
glutMainLoop();
break;case 2:
cout<<"Enter the Angle of Rotation(In Degrees)= ";
cin>>r;
t=3.14*r/180;
nx1=(x1*cos(t)-yy1*sin(t));
ny1=(x1*sin(t)+yy1*cos(t));
nx2=(x2*cos(t)-y2*sin(t));
ny2=(x2*sin(t)+y2*cos(t));
nx3=(x3*cos(t)-y3*sin(t));
ny3=(x3*sin(t)+y3*cos(t));
nx4=(x4*cos(t)-y4*sin(t));
ny4=(x4*sin(t)+y4*cos(t));
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(500,500);
glutInitWindowPosition(0,0);
glutCreateWindow("Rotation");
glutDisplayFunc(display);
myinit();
glutMainLoop();
break;
case 3:
cout<<"Enter the Scaling Factor x= ";
cin>>sx;
cout<<"Enter the Scaling Factor y= ";
cin>>sy;
nx1=x1*sx;
ny1=yy1*sy;
nx2=x2*sx;
ny2=y2*sy;
nx3=x3*sx;
ny3=y3*sy;
nx4=x4*sx;
ny4=y4*sy;
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(500,500);
glutInitWindowPosition(0,0);
glutCreateWindow("Scaling");
glutDisplayFunc(display);
myinit();
glutMainLoop();
break;case 4:
cout<<"Enter the Shearing Factor x= ";
cin>>shx;
cout<<"Enter the Shearing Factor y= ";
cin>>shy;
nx1=(x1+shx*yy1);
nx2=(x2+shx*y2);
nx3=(x3+shx*y3);
nx4=(x4+shx*y4);
ny1=(yy1+shy*x1);
ny2=(y2+shy*x2);
ny3=(y3+shy*x3);
ny4=(y4+shy*x4);
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(500,500);
glutInitWindowPosition(0,0);
glutCreateWindow("Shearing");
glutDisplayFunc(display);
myinit();
glutMainLoop();
break;
case 5:
nx1=
ny1=
nx2=
ny2=
nx3=
ny3=
nx4=
ny4=
//Reflection about X-axis.
x1;
-yy1;
x2;
-y2;
x3;
-y3;
x4;
-y4;
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(500,500);
glutInitWindowPosition(0,0);
glutCreateWindow("Reflection");
glutDisplayFunc(display);
myinit();
glutMainLoop();
break;
case 6:
//Reflection about Y-axis.
nx1= -x1;ny1=
nx2=
ny2=
nx3=
ny3=
nx4=
ny4=
yy1;
-x2;
y2;
-x3;
y3;
-x4;
y4;
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(500,500);
glutInitWindowPosition(0,0);
glutCreateWindow("Reflection");
glutDisplayFunc(display);
myinit();
glutMainLoop();
break;
case 7:
nx1=
ny1=
nx2=
ny2=
nx3=
ny3=
nx4=
ny4=
//Reflection about X=-Y Axis.
-x1;
-yy1;
-x2;
-y2;
-x3;
-y3;
-x4;
-y4;
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(500,500);
glutInitWindowPosition(0,0);
glutCreateWindow("Reflection");
glutDisplayFunc(display);
myinit();
glutMainLoop();
break;
case 8:
break;
}
return (0)
}
