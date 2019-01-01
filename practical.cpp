#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
int x,y;
int c,d;
bool loop=true;

while(loop){
    x=rand()%getmaxx();
    y=rand()%getmaxy();
    setcolor(BLUE);
    for(int i=0;i<=10;i++){
     circle(x,y,i);
     delay(10);
    }
    x=rand()%getmaxx();
    y=rand()%getmaxy();
    setcolor(WHITE);
    for(int i=0;i<=10;i++){
     circle(x,y,i);
     delay(10);
    }
    x=rand()%getmaxx();
    y=rand()%getmaxy();
    setcolor(RED);
    for(int i=0;i<=10;i++){
     circle(x,y,i);
     delay(10);
    }
    if(kbhit())
        loop=false;
    if(mousex() && mousey()){
     loop=false;
     return 0;
    }
}

getch();
closegraph();
return 0;
}
