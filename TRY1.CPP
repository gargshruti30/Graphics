#include<bits/stdc++.h>
#include <graphics.h>
int main()
{
    int xc , yc, r;
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    int toggle=0;
    int i,j,y,f;
    while(1)
    {

        for(i=30,j=0;i<=400;i+=40,j+=5)
        {
             for(f=400;f>=i;f-=2)
        {
            //pieslice(300+j,f,0,360,30);
            circle(300+j,f,30);
            line(0,430,1000,430);
            //delay(0.00000000000000000001);
            cleardevice();
        }
        for(y=i;y<=400;y+=2)
        {
            //pieslice(300+j,y,0,360,30);
            circle(300+j,y,30);
            line(0,430,1000,430);
            //delay(0.00000000000000000001);
            cleardevice();
        }
        }
    }
    getch();
    closegraph();
    return 0;
}
