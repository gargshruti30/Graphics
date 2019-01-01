#include<graphics.h>
#include<conio.h>

int main(){
 int gd = DETECT,gm;
    initgraph(&gd, &gm, "X:\\TC\\BGI");
    int i=0;

    line(50,200,400,200);


    while(true){
    while(true){
        ellipse(250,150,0,360,i,50);
        line(50,200,400,200);
        line(50,200,50,400);
        line(400,200,400,400);
        setfillstyle(SOLID_FILL, WHITE);
        floodfill(250, 150, WHITE);
        if(i==50){
            break;
        }
        i++;
        delay(100);
        cleardevice();
    }
    delay(100);
    cleardevice();
    while(true){
        ellipse(250,150,0,360,i,50);
        line(50,200,400,200);
        line(50,200,50,400);
        line(400,200,400,400);
        setfillstyle(SOLID_FILL, WHITE);
        floodfill(250, 150, WHITE);
        if(i==0){
            break;
        }
        i--;
        delay(100);
        cleardevice();
    }
        delay(100);
        cleardevice();
    }
    getch();
    closegraph();
    return 0;
}
