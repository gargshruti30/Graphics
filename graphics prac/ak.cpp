#include <iostream>
#include<graphics.h>
#include<bits/stdc++.h>


int main()
{

    int gd = DETECT, gm;

    // Initialize graphics function
    initgraph (&gd, &gm, "");
   int xc,yc,r;
   r = 20;
   for(int i = 200; i < 1000; i+= 41)
   {
r = 20;
       while(r < 390)
       {

           circle(i, i, r);
           circle(i + 100, i + 100, r);
           circle(i - 100, i + 100, r);
           circle(i - 100, i - 100, r);
           circle(i + 100, i - 100, r);
           line(i, i, i + 500, i + 500);
           line(i, i, i + 500, i - 500);
           line(i, i, i - 500, i + 500);
           line(i, i, i - 500, i - 500);

           if(i%2 == 0)
           setcolor(BLUE);

           else
            setcolor(RED);

           delay(50);
            cleardevice();
           r += 20;


       }
       while(r > 20)
       {

           circle(i ,i,r);
           circle(i + 100, i + 100, r);
           circle(i - 100, i + 100, r);
           circle(i - 100, i - 100, r);
           circle(i + 100, i - 100, r);
           line(i, i, i + 500, i + 500);
           line(i, i, i + 500, i - 500);
           line(i, i, i - 500, i + 500);
           line(i, i, i - 500, i - 500);

           if(i%2 == 0)
           setcolor(BLUE);

           else
            setcolor(RED);

           delay(50);
           cleardevice();
           r -= 20;

       }
   }
   getch();


   }

