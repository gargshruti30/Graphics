#include <iostream>
#include<graphics.h>
#include<bits/stdc++.h>

using namespace std;
int main()
{
int gd = DETECT, gm;

    // Initialize graphics function
    initgraph (&gd, &gm, "");
   int r1,r2;
for(int i=100;i<3000;i=i+20)
{ r1=100,r2=50;
while(r1<360 && r2<360)
{
ellipse(i+100,i+100,0,360,r1,r2);
ellipse(i+100,i+100,0,360,r1+5,r2+5);
ellipse(i+100,i+100,0,360,r1+10,r2+10);
ellipse(i+100,i+100,0,360,r1+15,r2+15);
ellipse(i+100,i+100,0,360,r1+20,r2+20);
 delay(50);
 if(i%2==0)
 setcolor(RED);
 else
 setcolor(BLUE);
cleardevice();
r1+=20;r2+=20;
}
}
}
