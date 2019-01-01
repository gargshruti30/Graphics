#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
	int i, gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	int x1, y1, x2, y2, xmin, xmax, ymin, ymax, xx1, xx2, yy1, yy2, dx, dy;
	cout << "Enter Window Coordinates : ";
	cin >> xmin >> ymin >> xmax >> ymax;
	rectangle(xmin, ymin, xmax, ymax);
	double u1, u2, p[4], q[4], temp;
	cout << "Enter Line Coordinates : ";
	cin >> x1 >> y1 >> x2 >> y2;
	dx = x2 - x1;
	dy = y2 - y1;
	line(x1, y1, x2, y2);
	p[0] = -dx;
	p[1] = dx;
	p[2] = -dy;
	p[3] = dy;

	q[0] = x1 - xmin;
	q[1] = xmax - x1;
	q[2] = y1 - ymin;
	q[3] = ymax - y1;

	for (i = 0; i < 4; i++) {
		if (p[i] == 0) {
			if (q[i] >= 0) {
				if (i < 2) {
					if (y1 < ymin) {
						y1 = ymin;
					}

					if (y2 > ymax) {
						y2 = ymax;
					}
				}

				if (i > 1) {
					if (x1 < xmin) {
						x1 = xmin;
					}

					if (x2 > xmax) {
						x2 = xmax;
					}
				}
			}
		}
	}

	u1 = 0;
	u2 = 1;

	for (i = 0; i < 4; i++) {
		temp = q[i] / p[i];

		if (p[i] < 0) {
			if (u1 <= temp) {
				u1 = temp;
			}
		}
		else {
			if (u2 > temp) {
				u2 = temp;
			}
		}
	}

	if (u1 < u2)
	{
		xx1 = x1 + u1 * p[1];
		xx2 = x1 + u2 * p[1];
		yy1 = y1 + u1 * p[3];
		yy2 = y1 + u2 * p[3];
		getch();
		cleardevice();
		rectangle(xmin, ymin, xmax, ymax);
		line(xx1, yy1, xx2, yy2);
	}
	else {
		getch();
		cleardevice();
		rectangle(xmin, ymin, xmax, ymax);
	}
	getch();
}
