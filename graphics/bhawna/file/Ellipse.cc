#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void drawellipse(double x, double y, double xc, double yc) {

	putpixel(xc + x, yc + y, 15);
	putpixel(xc + x, yc - y, 15);
	putpixel(xc - x, yc + y, 15);
	putpixel(xc - x, yc - y, 15);

}

int main() {
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	double xc, yc;
	cout << "Enter Center(x,y)=";
	cin >> xc >> yc;
	cout << "Enter a and b = ";
	double rx, ry;
	cin >> rx >> ry;
	double x = 0, y = ry;
	double po = pow(ry, 2) - (pow(rx, 2) * ry) + (pow(rx, 2));
	while (rx * rx * y >= ry * ry * x) {
		if (po <= 0) {
			y = y;
			po = po + 2 * ry * ry * (x + 1) + ry * ry;
		}
		else {
			y = y - 1;
			po = po + 2 * ry * ry * (x + 1) + ry * ry - 2 * rx * rx * (y - 1);
		}
		x = x + 1;
		drawellipse(x, y, xc, yc);
	}
	po = ((x + (1 / 2.0)) * (x + (1 / 2.0)) * ry * ry + (y - 1) * (y - 1) * rx * rx) - rx * rx * ry * ry;
	while (y != 0) {
		if (po < 0) {
			x = x + 1;
			po = po - 2 * rx * rx * (y - 1) + rx * rx + 2 * ry * ry * (x + 1);
		}
		else {
			x = x;
			po = po - 2 * rx * rx * (y - 1) + rx * rx;
		}
		y = y - 1;
		drawellipse(x, y, xc, yc);
	}
	getch();
}
