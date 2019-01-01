#include<graphics.h>
#include<iostream>
#include<math.h>
#include<dos.h>
using namespace std;
int round(float x)
{
  return (int)(x+0.5);
}
void DDA(int x1,int y1,int x2,int y2)
{
  int dx=x2-x1;
  int dy=y2-y1;
  int steps;
  if(abs(dx)>abs(dy))
  steps = abs(dx);
  else
  steps = abs(dy);
  float x_inc,y_inc;
  x_inc=dx/steps;
  y_inc=dy/steps;

  float x,y;
  x=x1;
  y=y1;
  putpixel(round(x),round(y),1);
  int counter=0;
  int k=1;
  for(int i=1;i<steps;i++)
  {

    x=x+x_inc;
    y=y+y_inc;
    putpixel(round(x),round(y),k%15);
    if(counter>10)
        {
            k++;
            counter=0;
        }
        counter++;
    delay(100);
  }
}
main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\TC\\BGI");
  int x1,y1,x2,y2;
  cin>>x1>>y1>>x2>>y2;
  DDA(x1,y1,x2,y2);
  getch();
  closegraph();
}
