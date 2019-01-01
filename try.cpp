#include<bits/stdc++.h>
#include <graphics.h>
int main()
{
    int xc , yc, r;
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    int toggle=0;
    int i,y,f;
    while(1)
    {
        for(i=400;i>=40;i-=20)
        {
        for(y=30;y<=i;y+=2)
        {
            pieslice(300,y,0,360,30);
            line(0,430,1000,430);
            delay(0.05);
            cleardevice();
        }
        for(f=i;f>=30;f-=2)
        {
            pieslice(300,f,0,360,30);
            line(0,430,1000,430);
            delay(0.05);
            cleardevice();
        }
        }
    }
    getch();
    closegraph();
    return 0;
}
