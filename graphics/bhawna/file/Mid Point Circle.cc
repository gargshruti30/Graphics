#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void drawcircle(int X, int Y, int radius) {
    int x = radius;
    int y = 0;
    int pk = 0;
    while (x >= y) {
        putpixel(X + x, Y + y, 7);
        putpixel(X + y, Y + x, 7);
        putpixel(X - y, Y + x, 7);
        putpixel(X - x, Y + y, 7);
        putpixel(X - x, Y - y, 7);
        putpixel(X - y, Y - x, 7);
        putpixel(X + y, Y - x, 7);
        putpixel(X + x, Y - y, 7);
        if (pk <= 0) {
            y += 1;
            pk += 2 * y + 1;
        }
        if (pk > 0) {
            x -= 1;
            pk -= 2 * x + 1;
        }
    }
}

int main() {
    int x, y, r;
    cout << "Enter co-ordinates of center : ";
    cin >> x >> y;
    cout << "Enter radius of Circle: ";
    cin >> r;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    drawcircle(x, y, r);
    getch();
    return 0;
}
