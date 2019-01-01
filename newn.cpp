#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <math.h>
#include<iostream>
using namespace std;
void bezier(int x[4],int y[4])
{
int px,py;
double t;
for(t=0.0;t<=1.0;t+=0.001)
{
px=(1-t)(1-t)(1-t)x[0]+3*t(1-t)(1-t)*x[1]+3*t*t(1-t)*x[2]+t*t*t*x[3];
py=(1-t)(1-t)(1-t)y[0]+3*t(1-t)(1-t)*y[1]+3*t*t(1-t)*y[2]+t*t*t*y[3];
putpixel(px,py,WHITE);
}
}
int​​ main​​()
{
    int gd=DETECT,gm;
 initgraph (&gd, &gm, "..\\bgi");    line(50,100,80,100);
    line(80,100,80,160);
    line(65,150,80,150);
    line(65,150,80,160);
    line(80,150,125,150);
    line(125,100,125,200);
    line(135,100,135,200);
    line(160,100,160,200);
    int x[]={160,145,145,160};
    int y[]={155,150,165,160};
    bezier(x,y);
    line(190,100,190,200);
    line(175,150,190,150);
    int a[]={175,179,182,185};
    int b[]={150,155,155,150,};
    bezier(a,b);
    line(200,100,200,200);
    line(115,100,200,100);

    closegraph();
    getch();
}
