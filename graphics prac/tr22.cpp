#include <iostream>
#include<graphics.h>
#include<bits/stdc++.h>


int main()
{

    int gd = DETECT, gm;

    // Initialize graphics function
    initgraph (&gd, &gm, "");
   for(int i=40;i<300;i=i+10)
   {
       int r1=80,r2=10;
       while(r1<400 && r2<400)
   {ellipse(i+100,i+100,0,360,r1,r2);ellipse(i+110,i+110,0,360,r1,r2);ellipse(i+120,i+120,0,360,r1,r2);
 setcolor(BLUE);delay(40);
           cleardevice();

   r1=r1+10;r2=r2+10;


   }

   }
}


