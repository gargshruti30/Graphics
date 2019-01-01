#include<graphics.h>
#include<conio.h>

int main(){
 int gd = DETECT,gm;
    initgraph(&gd, &gm, "X:\\TC\\BGI");


    rectangle(100,80,280,380);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(111, 111, WHITE);
    circle(190,400,15);
    rectangle(185,395,195,405);
    line(90,50,90,400);
    line(290,50,290,400);
    line(110,30,270,30);
    line(110,420,270,420);
    rectangle(150,65,230,68);
    circle(190,57,5);

    int x[4]={90,90,90,110},y[4]={50,30,30,30},px,py,i;

double t;
for(t=0.0;t<=1.0;t+=0.001){
px=(1-t)*(1-t)*(1-t)*x[0]+3*t*(1-t)*(1-t)*x[1]+3*t*t*(1-t)*x[2]+t*t*t*x[3];
py=(1-t)*(1-t)*(1-t)*y[0]+3*t*(1-t)*(1-t)*y[1]+3*t*t*(1-t)*y[2]+t*t*t*y[3];
putpixel(px,py,WHITE);
}

x[0]=270;
x[1]=291;
x[2]=291;
x[3]=291;
y[0]=30;
y[1]=30;
y[2]=30;
y[3]=50;

for(t=0.0;t<=1.0;t+=0.001){
px=(1-t)*(1-t)*(1-t)*x[0]+3*t*(1-t)*(1-t)*x[1]+3*t*t*(1-t)*x[2]+t*t*t*x[3];
py=(1-t)*(1-t)*(1-t)*y[0]+3*t*(1-t)*(1-t)*y[1]+3*t*t*(1-t)*y[2]+t*t*t*y[3];
putpixel(px,py,WHITE);
}
x[0]=90;
x[1]=90;
x[2]=90;
x[3]=110;
y[0]=400;
y[1]=421;
y[2]=421;
y[3]=421;

for(t=0.0;t<=1.0;t+=0.001){
px=(1-t)*(1-t)*(1-t)*x[0]+3*t*(1-t)*(1-t)*x[1]+3*t*t*(1-t)*x[2]+t*t*t*x[3];
py=(1-t)*(1-t)*(1-t)*y[0]+3*t*(1-t)*(1-t)*y[1]+3*t*t*(1-t)*y[2]+t*t*t*y[3];
putpixel(px,py,WHITE);
}
x[0]=291;
x[1]=291;
x[2]=291;
x[3]=270;
y[0]=400;
y[1]=421;
y[2]=421;
y[3]=421;

for(t=0.0;t<=1.0;t+=0.001){
px=(1-t)*(1-t)*(1-t)*x[0]+3*t*(1-t)*(1-t)*x[1]+3*t*t*(1-t)*x[2]+t*t*t*x[3];
py=(1-t)*(1-t)*(1-t)*y[0]+3*t*(1-t)*(1-t)*y[1]+3*t*t*(1-t)*y[2]+t*t*t*y[3];
putpixel(px,py,WHITE);
}
    getch();
    closegraph();
    return 0;
}
