#include<iostream>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
using namespace std;
void curve(int x[4],int y[4])
{
int px,py,i;
double t;
for(t=0.0;t<=1.0;t+=0.0005)
{
px=(1-t)*(1-t)*(1-t)*x[0]+3*t*(1-t)*(1-t)*x[1]+3*t*t*(1-t)*x[2]+t*t*t*x[3];
py=(1-t)*(1-t)*(1-t)*y[0]+3*t*(1-t)*(1-t)*y[1]+3*t*t*(1-t)*y[2]+t*t*t*y[3];
putpixel(px,py,WHITE);
}
}
int main()
{
    int gd = DETECT, gm;
    initgraph (&gd, &gm, "..\\bgi");
    int x[4],y[4],px,py,i;
    line(10,100,500,100);
    line(200,100,200,300);
    line(250,100,250,300);
    line(400,100,400,300);
    line(325,200,400,200);
    x[0] = 325; y[0] = 200;
    x[1] = 300; y[1] = 200;
    x[2] = 300; y[2] = 300;
    x[3] = 325; y[3] = 300;
    curve(x, y);
    x[0] = 250; y[0] = 100;
    x[1] = 200; y[1] = 50;
    x[2] = 250; y[2] = 25;
    x[3] = 400; y[3] = 100;
    curve(x, y);

    //shr
    line(100,175,200,200);
    line(100,175,40,250);
    line(150,187,90,260);
    circle(100,155,20);
    getch();
    closegraph();
}
