#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <math.h>
#include<iostream>
using namespace std;
void beizer(int x[4],int y[4])
{
​ ​​int​​ i​​;     ​​
 double​​ t​​;     ​
 ​for​​ ​​(​​t ​​=​​ ​​0.0​​;​​ t ​​<​​ ​​1.0​​;​​ t ​​+​​=​​ ​​0.0005​​)
​​{
     ​​double​​ x_ ​​=​​ ​​pow​​ ​​(​​1​​-​​t, ​​3​​)​​ ​​*​​ x​​[​​0​​]​​ ​​+​​ ​​3​​ ​​*​​ t ​​*​​ ​​pow​​ ​​(​​1​​-​​t, ​​2​​)​​ ​​*​​ x​​[​​1​​]​​ ​​+ 3​​ ​​*​​ ​​pow​​ ​​(​​t, ​​2​​)​​ ​​*​​ ​​(​​1​​-​​t​​)​​ ​​*​​ x​​[​​2​​]​​ ​​+​​ ​​pow​​ ​​(​​t, ​​3​​)​​ ​​*​​ x​​[​​3​​]​​;
     ​​double​​ y_ ​​=​​ ​​pow​​ ​​(​​1​​-​​t, ​​3​​)​​ ​​*​​ y​​[​​0​​]​​ ​​+​​ ​​3​​ ​​*​​ t ​​*​​ ​​pow​​ ​​(​​1​​-​​t, ​​2​​)​​ ​​*​​ y​​[​​1​​]​​ ​​+ 3​​ ​​*​​ ​​pow​​ ​​(​​t, ​​2​​)​​ ​​*​​ ​​(​​1​​-​​t​​)​​ ​​*​​ y​​[​​2​​]​​ ​​+​​ ​​pow​​ ​​(​​t, ​​3​​)​​ ​​*​​ y​​[​​3​​]​​;
     putpixel ​​(​​x_, y_, WHITE​​)​​;
​​}
​​return​​;
}
int​​ main​​()
{
    int gd=DETECT,gm;
    initgraph ​​(​​&​​gd, ​​&​​gm, ​​"..​​\\​​bgi"​​)​​;
    line(50,100,80,100);
    line(80,100,80,160);
    line(65,150,80,150);
    line(65,150,80,160);
    line(80,150,125,150);
    line(125,100,125,200);
    line(135,100,135,200);
    line(160,100,160,200);
    int x[]={160,145,145,160};
    int y[]={155,150,165,160};
    bezier(x,y);
    line(190,100,190,200);
    line(175,150,190,150);
    int x[]={175,179,182,185};
    int y[]={150,155,155,150,};
    bezier(x,y);
    line(200,100,200,200);
    line(115,100,200,100);
    return 0;
    closegraph();
    getch();
}

