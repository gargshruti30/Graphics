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
  cout<<"SLOPE IS POSITIVE AND < 1"<<endl;
  int x1,y1,x2,y2;
  cin>>x1>>y1>>x2>>y2;
  int x=x1;
  int y=y1;
  putpixel(x,y,2);
  int dx=x2-x1;
  int dy=y2-y1;
  int tdx=2*dx;
  int tdy=2*dy;
  int P=tdy-dx;
  for(int i=0;i<dx;i++)
  {
      if(P<0)
      {
          x++;
          P=P+tdy;
          putpixel(x,y,2);
      }
      else
      {
          x++;
          y++;
          P=P+tdy-tdx;
          putpixel(x,y,2);
      }
  }

  getch();
  closegraph();
}
