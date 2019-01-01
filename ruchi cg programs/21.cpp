#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h>

int main() {
    int gd = DETECT, gm;
    int i, x, y;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    circle(150,200,50);
    setfillstyle(SOLID_FILL, RED);
    floodfill(150, 200, WHITE);
   for(i=0; i<=500; i++) {
       x=rand()%getmaxx();
          y=rand()%getmaxy();
          putpixel(x,y,15);
      }

    getch();
    closegraph();
    return 0;
}
