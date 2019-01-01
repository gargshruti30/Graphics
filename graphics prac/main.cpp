#include<iostream>
#include <dos.h>
#include <graphics.h>
#include<windows.h>
using namespace std;

void drawCircle(int xc, int yc, int x, int y,int s)
{
    putpixel(xc+x, yc+y, s);
    putpixel(xc-x, yc+y, s);
    putpixel(xc+x, yc-y, s);
    putpixel(xc-x, yc-y, s);
    putpixel(xc+y, yc+x, s);
    putpixel(xc-y, yc+x, s);
    putpixel(xc+y, yc-x, s);
    putpixel(xc-y, yc-x, s);
}

void circleBres(int xc, int yc, int r)
{
    do{
            int xcc=xc;
    do{
    int rr=r;
    do{

    int x = 0, y = rr-1;
    int d = 3 - 2 * (rr-1);
    while (y >= x)
    {

        drawCircle(xcc, yc, x, y, 0);
        x++;
        if (d > 0)
        {
            y--;
            d = d + 4 * (x - y) + 10;
        }
        else
            d = d + 4 * x + 6;
        //drawCircle(xc, yc, x, y);


    }
    x = 0, y = rr;
    d = 3 - 2 * rr;
    while (y >= x)
    {

        drawCircle(xcc, yc, x, y, 2);
        x++;
        if (d > 0)
        {
            y--;
            d = d + 4 * (x - y) + 10;
        }
        else
            d = d + 4 * x + 6;
        //drawCircle(xc, yc, x, y);


    }
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
    cin>>xc>>yc>>r;
    while(1)
    {
    cleardevice();
    circleBres(xc, yc, r);
    }
    getch();
    closegraph();
}
