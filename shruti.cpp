#include<bits/stdc++.h>
#include <graphics.h>

#define PI 3.14159265

int main()
{
    int xc , yc, r;
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    int toggle=0;
    while(1)
    {
         ​​for​​(​​int​​ y​​=​​30​​;​​y​​<=​​400​​;​​y​​+​​=​​2​​)
         {
              pieslice​​(​​300​​,y,​​0​​,​​360​​,​​30​​)​​;
              line​​(​​0​​,​​430​​,​​1000​​,​​430​​)​​;
              delay​​(​​3​​)​​;
              cleardevice​​()​​;
         }
         for​​(​​int​​ f​​=​​400​​;​​f​​>=​​30​​;​​f​​-​​=​​2​​)
         {
             pieslice​​(​​300​​,f,​​0​​,​​360​​,​​30​​)​​;
             line​​(​​0​​,​​430​​,​​1000​​,​​430​​)​​;
             delay​​(​​3​​)​​;
             cleardevice​​()​​;
         }
    }
     outtext​​(​​"press any key to exit"​​)​​;


    getch();
    closegraph();
}
