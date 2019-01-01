#include<graphics.h>
#include<iostream>
#include<math.h>
#include<dos.h>
using namespace std;
main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\TC\\BGI");
  cout<<"SLOPE IS POSITIVE AND > 1"<<endl;
  int x1,y1,x2,y2;
  cin>>x1>>y1>>x2>>y2;
  int x=x1;
  int y=y1;
  putpixel(x,y,2);
  int dx=x2-x1;
  int dy=y2-y1;
  int tdx=2*dx;
  int tdy=2*dy;
  int P=tdx-dy;
  for(int i=0;i<dy;i++)
  {
      if(P<0)
      {
          y++;
          P=P+tdx;
          putpixel(x,y,2);
      }
      else
      {
          x++;
          y++;
          P=P+tdx-tdy;
          putpixel(x,y,2);
      }
  }

  getch();
  closegraph();
}
