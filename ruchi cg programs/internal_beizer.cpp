#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

int main(){
 int gd = DETECT,gm;
    initgraph(&gd, &gm, "X:\\TC\\BGI");
int x[4],y[4],px,py,i;
for(int i=0; i<4; i++){
    cout<<"x"<<i+1<<":";cin>>x[i];
    cout<<"y"<<i+1<<":";cin>>y[i];
}
//20 40n 70 40 70 140 20 140
double t;
for(t=0.0;t<=1.0;t+=0.001){
px=(1-t)*(1-t)*(1-t)*x[0]+3*t*(1-t)*(1-t)*x[1]+3*t*t*(1-t)*x[2]+t*t*t*x[3];
py=(1-t)*(1-t)*(1-t)*y[0]+3*t*(1-t)*(1-t)*y[1]+3*t*t*(1-t)*y[2]+t*t*t*y[3];
putpixel(px,py,WHITE);
delay(1);}
getch();
closegraph();
return 0;
}
