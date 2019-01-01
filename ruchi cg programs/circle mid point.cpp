#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

void draw_points(int xc, int yc, int x, int y){
putpixel(xc+x, yc+y, WHITE);
putpixel(xc+x, yc-y, WHITE);
putpixel(xc-x, yc+y, WHITE);
putpixel(xc-x, yc-y, WHITE);
putpixel(xc+y, yc+x, WHITE);
putpixel(xc+y, yc-x, WHITE);
putpixel(xc-y, yc+x, WHITE);
putpixel(xc-y, yc-x, WHITE);

}

void midpoint_circle(int xc, int yc, int r){
    int x=0, y=r;
    draw_points(xc,yc,x,y);
    int p=1-r;
    while(x<y){
        if(p<0){
            x=x+1;
            p=p+2*x+1;
        }
        else{
            x=x+1;
            y=y-1;
            p=p+2*x-2*y+1;
        }
        draw_points(xc,yc,x,y);
    }
}

int main(){
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\TC\\BGI");
  cout<<"Circle:"<<endl;
  int xc,yc,r;
  cout<<"x coordinate of centre:";
  cin>>xc;
  cout<<"y coordinate of centre:";
  cin>>yc;
  cout<<"radius:";
  cin>>r;
  midpoint_circle(xc,yc,r);
  getch();
  closegraph();
}
