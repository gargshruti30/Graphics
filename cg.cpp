#include<iostream>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
using namespace std;
int main()
{int gd = DETECT, gm;
initgraph (&gd, &gm, "..\\bgi");
int r=20;
//for(int i=20;i<300;i++)
while(r<300)
{
    circle(100,100,r);
    circle(100,100,r+40);
    r=r+20;delay(50);cleardevice();
}
while(r>20)
{
    circle(100,100,r);
    circle(100,100,r+40);
    r=r-20;delay(50);cleardevice();
}
getch();
closegraph();}
