#include<iostream>
#include <dos.h>
#include <graphics.h>
#include<windows.h>
using namespace std;
int main()
{int gd = DETECT, gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
 int r=10;
    for(int i=20;i<300;i=i+10)
{
while(r<400)
{
    circle(200,200,r);
circle(200,200,r+5);
circle(200,200,r+10);
setcolor(BLUE);
delay(50);
cleardevice();
r=r+20;}
{
while(r>20)
{circle(200,200,r);
circle(200,200,r+5);
circle(200,200,r+10);
setcolor(BLUE);
delay(50);
cleardevice();
r=r-20;}

}
}}



