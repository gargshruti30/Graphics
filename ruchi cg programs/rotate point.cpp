#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm," ");
float x,y,angle;
cout<<"x:";cin>>x;
cout<<"y:";cin>>y;
putpixel(x,y,RED);
cout<<"angle:";cin>>angle;
int x_new=x*cos(angle)-y*sin(angle);
int y_new=x*sin(angle)+y*cos(angle);
putpixel(x_new,y_new,WHITE);
line(x,y,x_new,y_new);
getch();
closegraph();
return 0;
}
