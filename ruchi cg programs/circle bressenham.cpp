#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;


void drawCircle(int xc, int yc, int x, int y)
{
    putpixel(xc+x, yc+y, RED);
    putpixel(xc-x, yc+y, RED);
    putpixel(xc+x, yc-y, RED);
    putpixel(xc-x, yc-y, RED);
    putpixel(xc+y, yc+x, RED);
    putpixel(xc-y, yc+x, RED);
    putpixel(xc+y, yc-x, RED);
    putpixel(xc-y, yc-x, RED);
}

void circleBres(int xc, int yc, int r)
{
    int x = 0, y = r;
    int d = 3 - 2 * r;
    while (y >= x)
    {
        drawCircle(xc, yc, x, y);
        x++;

        if (d > 0)
        {
            y--;
            d = d + 4 * (x - y) + 10;
        }
        else
            d = d + 4 * x + 6;
                    drawCircle(xc, yc, x, y);
        delay(50);
    }
}


int main()
{
    int xc, yc, r;
    cout<<"x coordinate of centre:";
    cin>>xc;
    cout<<"y coordinate of centre:";
    cin>>yc;
    cout<<"radius:";
    cin>>r;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    circleBres(xc, yc, r);
    getch();
    closegraph();
    return 0;
}
