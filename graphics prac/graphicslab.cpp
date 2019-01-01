#include<iostream>
#include<cstdio>
#include<conio.h>
#include<graphics.h>
using namespace std;
static int n;
class abc                  //class to implement the 2 wiry guys
{
      public:
      abc()
      {
           n=0;
      }
      void drawl(int x, int y)  //draws the person facing left, on the right side of the text
      {
           if(n%6==0)
           circle(x-2,y,6);
           else
           circle(x+2,y,6);          //the head
           line(x,y+3,x,y+8);
           circle(x,y+20,10);         //the stomach
           line(x+7,y+18,x+16,y+23);   //hands
           line(x+7,y+18,x+16,y+13);
           if(n%6==0)
           {
           line(x-2,y+30,x-8,y+45);
           line(x+2,y+30,x+8,y+45);               //legs
           }
           else
           {
           line(x-2,y+30,x-4,y+45);                //moving the legs
           line(x+2,y+30,x+4,y+45);
           }
           n++;
      }
       void drawr(int x, int y)                         //draws a left-facing man, on the right side of the text
      {
             if(n%6==0)
           circle(x-2,y,6);
           else
           circle(x+2,y,6);
           line(x,y+3,x,y+8);
           circle(x,y+20,10);
           line(x-10,y+18,x-16,y+23);
           line(x-10,y+18,x-16,y+13);
           if(n%6==0)
           {
           line(x-2,y+30,x-8,y+45);
           line(x+2,y+30,x+8,y+45);
           }
           else
           {
           line(x-2,y+30,x-4,y+45);
           line(x+2,y+30,x+4,y+45);
           }
      }
};
int main()
{
    abc a;
     int gm=DETECT,gd;                  //declaring Graphics Mode as AUTODETECT and Graphics Driver
    initgraph(&gm,&gd,"C:\\Dev-Cpp\\lib");  //initializing graphics mode
    cleardevice();       //clearing the device
    int x=getmaxx(),t=350,y=getmaxy(),t1=50,c=7,vx=2,vy=3,fx=0,fy=0,length,height,r=0; //x and y have the maximum screen dimensions; vx and vy are components of the vector for text; fx and fy are flags; length and height determine the same of the text
    char str[]="WORLD";
    for(c=0;str[c]!='\0';c++);
    length=c*40;     //calculating length
    height=40;        //calculating height
    c=2;
    int l=length;
    length+=40;
     setcolor(c);
    int mx=mousex();      //storing the current (starting) position of the mouse
    int my=mousey();
    int ct[8]={70,280,160,310,500,30,450,220},ct1[8]={30,450,270,330,195,40,567,234},fcy[8]={0,0,0,0,0,0,0,0},fcx[8]={0,0,0,0,0,0,0,0},rc[8]={0,0,0,0,0,0,0,0},cdx[8]={1,2,1,2,1,2,1,2},cdy[8]={1,2,1,2,1,2,1,2};  //variables for rings corresponding to the text
    settextstyle(TRIPLEX_FONT,0,5);   //set the style of text
    while(!kbhit())   //run till keyboard is untouched, i.e., no key pressed
    {
    clearviewport();              //clear graphics screen
    a.drawl(t-20,t1);             // calling functions to draw left and right people
    a.drawr(t+l+25,t1);
    for(int v=0;v<5;v++)
    {
    c++;
    setcolor(c);
    circle(ct[v],ct1[v],10);       //drawing the rings with updated positions
    }
    c=c-5;
    setcolor(c);
    outtextxy(t,t1,str);            //writing the text
    for(int i=0;i<333333;i++)
    for(int j=0;j<20;j++);
   //now we change the drawing positions according to the flags. fx determines if movement is in right direction (0) or in the left direction (1) and fy determines if movement is in the downward direction (0) or upward direction (1)
    if(fx==0)
    t+=vx;
    else
    t-=vx;
    if(fy==0)
    t1+=vy;
    else
    t1-=vy;
    for(int v=0;v<5;v++)
    {
      if(fcx[v]==0)
       ct[v]+=cdx[v];
      else
       ct[v]-=cdx[v];
      if(fcy[v]==0)
       ct1[v]+=cdy[v];
      else
       ct1[v]-=cdy[v];
    }
   if(mousex()!=mx || mousey()!=my)  // checking if mouse has been moved
   exit(1);
   for(int v=0;v<5;v++)  //here, we check if rebound is required for the rings
   {
    if((getmaxy()-ct1[v])<10)
    {
     fcy[v]=1;
     rc[v]=1;
    }
    if(ct1[v]<10)
    {
      rc[v]=1;
      fcy[v]=0;
    }
    if(getmaxx()-ct[v]<10)
    {
      rc[v]=1;
      fcx[v]=1;
    }
    if(ct[v]==0)
    {
      rc[v]=1;
      fcx[v]=0;
    }
   }
//now we check if the text needs to be rebounded
    if((getmaxy()-t1)<height)
    {
     r=1;
     fy=1;
    }
    if(t1<5)
    {
     r=1;
     fy=0;
    }
    if((getmaxx()-t)<length)
    {
     r=1;
     fx=1;
    }
    if(t<30)
    {
     r=1;
     fx=0;
    }
    if(r==1)  //change the color of text if rebound occurs
    {
    r=0;
     c++;
     if(c>7) c=1;
     setcolor(c);
    }
    }
    getch();
    closegraph();  //close the graphics mode
}
