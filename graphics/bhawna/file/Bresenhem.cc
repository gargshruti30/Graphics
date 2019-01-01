#include<bits/stdc++.h>
#include <graphics.h>
using namespace std;

char flag;

void Bresenham(int x1, int x2, int y1, int y2) {

	int dx = abs(x1 - x2);
	int dy = abs(y1 - y2);
	double Slope;
	int PInc, NInc, XInc, YInc;
    int S, O, End;
	int P;
	if (dx == 0) {
	}
	else {
		Slope = (double)(y1 - y2) / (x1 - x2);
		if (Slope > -1 && Slope < 1) {
			flag = 'X';
			PInc = 2 * (dy - dx);
			NInc = 2 * dy;
			P = 2 * dy - dx;
			if (x1 > x2) {
				S = x2;
				O = y2;
				End = x1;
			}
			else {
				S = x1;
				O = y1;
				End = x2;
			}

		}
		else {
			flag = 'Y';
			PInc = 2 * (dx - dy);
			NInc = 2 * dx;
			P = 2 * dx - dy;
			if (y1 > y2) {
				O = x2;
				S = y2;
				End = y1;
			}
			else {
				O = x1;
				S = y1;
				End = y2;
			}
		}
		if (flag == 'X') {
			putpixel(S, O, 15);
		}
		else {
			putpixel(O, S, 15);
		}
		while (S <= End) {
			S++;
			if (P < 0) {
				P = P + NInc;
			}
			else {
				P = P + PInc;
				if (Slope > 0.0) {
					O++;
				}
				else {
					O--;
				}
			}
			if (flag == 'X') {
				putpixel(S, O,15);
			}
			else {
				putpixel(O, S, 15);
			}
		}
	}
}

int main() {
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	int x1, x2, y1, y2;


	cout << "x1: ";
	cin >> x1;
	cout << "y1: ";
	cin >> y1;
	cout << "x2: ";
	cin >> x2;
	cout << "y2: ";
	cin >> y2;

	Bresenham(x1, x2, y1, y2);
	getch();
}
