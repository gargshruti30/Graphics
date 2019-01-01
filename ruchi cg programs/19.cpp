#include<graphics.h>
#include<conio.h>

int main(){
 int gd = DETECT,gm;
    initgraph(&gd, &gm, "X:\\TC\\BGI");

    setcolor(WHITE);
    rectangle(100,100,320,260);
    rectangle(110,110,310,250);

    line(90,360,330,360);
    line(90,365,330,365);
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
    setfillstyle(HATCH_FILL, CYAN);
    floodfill(121, 271, WHITE);
    setfillstyle(SOLID_FILL, 15);
    floodfill(186, 326, WHITE);
    getch();
    closegraph();
    return 0;
}
