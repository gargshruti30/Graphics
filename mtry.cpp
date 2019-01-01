#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main() {
	int gd = DETECT, gm;
	initgraph(&gd,&gm,"C:/TURBOC3/BGI");
	int x, y = 0, j, t = 400, flag = 1;
	//setcolor(RED);
	//line(20,430,500,430);
	//setfillstyle(SOLID_FILL, RED);
	for (x = 40; x < 602; x++) {

		cleardevice();
		line(20,430,500,430);
		circle(x, y, 30);
		//floodfill(x, y, RED);
		delay(60);
		if (y >= 400) {
			flag = 0;
			t =t-20;
		}
		if (y <= (400 - t))
			    flag = 1;
		y = y + (flag ? 15 : -15);
	}
	getch();
	closegraph();
}
