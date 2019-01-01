#include<graphics.h>
#include<conio.h>

int main(){
 int gd = DETECT,gm;
    initgraph(&gd, &gm, "X:\\TC\\BGI");

    rectangle(100,100,300,400);
    rectangle(170,300,200,400);
    /*rectangle(180,250,220,300);
    rectangle(290,200,320,220);
    rectangle(340,200,370,220);*/

    line(100,100,200,0);
    line(200,0,300,100);
    line(100,100,300,100);

    /*setfillstyle(SOLID_FILL, BROWN);
    floodfill(152, 182, WHITE);
    floodfill(252, 182, WHITE);
    setfillstyle(SLASH_FILL, BLUE);
    floodfill(182, 252, WHITE);
    setfillstyle(HATCH_FILL, GREEN);
    floodfill(200, 105, WHITE);
    floodfill(210, 105, WHITE);*/

    getch();
    closegraph();
    return 0;
}
