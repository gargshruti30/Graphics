
#include<graphics.h>
#include<iostream>
#include<math.h>
#include<dos.h>
using namespace std;
void Drawpoint(int x,int y,int xc,int yc,int r)
{
    putpixel(xc+x,yc+y,r%15);
    putpixel(xc-x,yc+y,r%15);
    putpixel(xc+x,yc-y,r%15);
    putpixel(xc-x,yc-y,r%15);
    putpixel(xc+y,yc+x,r%15);
    putpixel(xc-y,yc+x,r%15);
    putpixel(xc+y,yc-x,r%15);
    putpixel(xc-y,yc-x,r%15);
}
main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\TC\\BGI");
  cout<<"Circle"<<endl;
  int xc,yc,r;
  cin>>xc>>yc>>r;
  do{
        int xcr=xc;
  do{

      int rr=r;
  do{

  int x=0;
  int y=rr;
  int p=1-rr;
  while(x<=y)
  {
      delay(10);
      Drawpoint(x,y,xcr,yc,rr);
      if(p<0)
      {
          x++;
          p=p+(2*x)+1;
      }
      else
      {
          x++;
          y--;
          p=p+(2*x)-(2*y)+1;
      }
  }
  rr=rr-4;
  }while(rr>=0);

  xcr+=(3*r);
  }while(xcr<600);

  yc+=(3*r);
  }while(yc<=400);

  getch();
  closegraph();
}
