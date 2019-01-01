#include<graphics.h>
#include<conio.h>

int main(){
 int gd = DETECT,gm;
    initgraph(&gd, &gm, "X:\\TC\\BGI");

    setcolor(WHITE);
    rectangle(100,50,320,200);
    rectangle(110,60,310,190);
    ellipse(210,225,0,360,55,15);

    rectangle(360,70,450,300);
    rectangle(370,100,440,120);
    circle(420,140,10);
    putpixel(420,140,GREEN);

    line(200,200,200,220);
    line(220,200,220,220);

    line(110,260,310,260);
    line(90,360,330,360);
    line(90,360,110,260);
    line(330,360,310,260);

    line(120,270,300,270);
    line(110,315,310,315);
    line(120,270,110,315);
    line(300,270,310,315);

    line(185,325,225,325);
    line(180,345,230,345);
    line(185,325,180,345);
    line(225,325,230,345);

    setfillstyle(SOLID_FILL, BLUE);
    floodfill(111, 111, WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(371, 101, WHITE);
    setfillstyle(HATCH_FILL, CYAN);
    floodfill(121, 271, WHITE);
    setfillstyle(SOLID_FILL, 15);
    floodfill(186, 326, WHITE);
    getch();
    closegraph();
    return 0;
}
