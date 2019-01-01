#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void DDA(double x1, double y1, double x2, double y2) {

	double dx = (x2 - x1);
	double dy = (y2 - y1);
	int steps = 0;
	if (abs(dx) >= abs(dy)) {
		steps = abs(dx);
	} else steps = abs(dy);

	double x_inc = dx / steps;
	double y_inc = dy / steps;

	double X = x1;
	double Y = y1;
	putpixel(round(X), round(Y), 1);

	for (int i = 1; i <= steps; i++) {
		X = X + x_inc;
		Y = Y + y_inc;
		putpixel(round(X), round(Y), WHITE);
		delay(50);
	}
}

int main() {
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	double x1, y1, x2, y2;
	cout << "Enter x1 = ";
	cin >> x1;
	cout << "Enter y1 = ";
	cin >> y1;
	cout << "Enter x2 = ";
	cin >> x2;
	cout << "Enter y2 = ";
	cin >> y2;
	DDA(x1, y1, x2, y2);
	getch();
}
