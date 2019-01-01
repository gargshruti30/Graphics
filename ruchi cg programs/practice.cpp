#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"X:\\TC\\BGI");
/*int triangle[]={300,300,150,450,450,450,300,300};
//drawpoly(4,triangle);
rectangle(150,450,450,850);
rectangle(250,700,350,850);
rectangle(200,500,250,550);
rectangle(350,500,400,550);
setfillstyle(SLASH_FILL,BLUE);
fillpoly(4,triangle);*/
/*rectangle(100,100,300,200);
rectangle(110,110,290,190);

line(100,200,50,250);
line(300,200,350,250);
line(50,250,350,250);
line(50,260,350,260);

line(110,210,290,210);
line(110,210,105,230);
line(290,210,295,230);
line(105,230,295,230);
setfillstyle(HATCH_FILL,BLUE);
floodfill(130,220,WHITE);
*/
/*setfillstyle(SOLID_FILL, WHITE);
circle(100,100,25);
floodfill(100,100,WHITE);
/*while(true){
 for(int i=0; i<1000; i++){
    pieslice(100,100,0+i,30+i,100);
    pieslice(100,100,120+i,150+i,100);
    pieslice(100,100,240+i,270+i,100);
    delay(20);
    cleardevice();
}
}*/
/*int x,y;
circle(100,100,50);
circle(200,100,1);
circle(300,200,1);
circle(150,150,1);
setfillstyle(SOLID_FILL, WHITE);
floodfill(100,100,WHITE);
floodfill(200,100,WHITE);
floodfill(300,200,WHITE);
floodfill(150,150,WHITE);
for(int i=0; i<1000; i++){
        x=rand()%getmaxx();
        y=rand()%getmaxy();
        putpixel(x,y,15);
}*/
line(100,100,100,200);
line(100,200,200,200);
rectangle(120,150,130,200);
rectangle(150,120,160,200);
rectangle(180,180,190,200);
getch();
closegraph();
return 0;
}
