#include<iostream>
#include <dos.h>
#include <graphics.h>
#include<windows.h>
using namespace std;
void circleBres(int xc, int yc, int r)
{
    do{
            int xcc=xc;
    do{
    int rr=r;
    do{
    setcolor(rr%15);
    circle(xcc,yc,rr);
    delay(0.1);
    rr+=1;
    }while(rr<=(1.5*r));
    xcc+=(2*r);
  }while(xcc<600);
  yc+=(2*r);
    }while(yc<600);


}

int main()
{
    int xc , yc, r;
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    //cin>>xc>>yc>>r;
    while(1)
    {
    cleardevice();
    circleBres(100, 100, 100);
    }
    getch();
    closegraph();
}
