#include<graphics.h>
#include<bits/stdc++.h>

int main()
{
	int gd=DETECT,gm,x,y;
	initgraph(&gd,&gm,"c:\\tc\\bgi");

	int i=0;
	while(true){
    for(int i=0;i<25;i++){
	circle(250,250,i);
	}
	pieslice(250, 250, 0+i, 30+i, 150);
	pieslice(250, 250, 60+i, 90+i, 150);
	pieslice(250, 250, 120+i, 150+i, 150);
	pieslice(250, 250, 180+i, 210+i, 150);
	pieslice(250, 250, 240+i, 270+i, 150);
	pieslice(250, 250, 300+i, 330+i, 150);
	delay(20);
	cleardevice();
	i++;
    }
	getch();

	closegraph();
}
