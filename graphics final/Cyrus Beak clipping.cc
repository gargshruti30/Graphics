#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

struct points {
	double x;
	double y;
};

struct polygon {
	int npoints;
	points v[1000];
};
double dotproduct(points a, points b) {
	return a.x * b.x + a.y * b.y;
}
points getnormal(points a, points b, points boundary) {
	double dx = b.x - a.x;
	double dy = b.y - a.y;
	points N = { -dy , dx};
	points k = {boundary.x - a.x, boundary.y - a.y};
	double dotresult = dotproduct(k, N);
	if (dotresult == 0) {
		cout << "Error--3 Colinear Points Along Polygon" << endl;
		exit(0);
	}
	if (dotresult < 0) {
		N.x *= -1;
		N.y *= -1;
	}
	return N;
}

int main() {
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	cout << "Enter number of Vertices : ";
	polygon poly;
	cin >> poly.npoints;
	double n = poly.npoints;
	for (int i = 0; i < n; i++) {
		cout << "Enter coordinates x and y : ";
		cin >> poly.v[i].x >> poly.v[i].y;
	}
	for (int i = 0; i < n; i++) {
		line(poly.v[i].x, poly.v[i].y, poly.v[(i + 1) % poly.npoints].x, poly.v[(i + 1) % poly.npoints].y);
	}
	cout << "Enter coordinates of Line (x1,y1) and (x2,y2) : ";
	points Line[2];
	cin >> Line[0].x >> Line[0].y >> Line[1].x >> Line[1].y;
	line(Line[0].x , Line[0].y , Line[1].x , Line[1].y);
	points D = {Line[1].x - Line[0].x, Line[1].y - Line[0].y};
	double tl = 0, tu = 1;
	for (int i = 0; i < n; i++) {
		points W = {Line[0].x - poly.v[i].x, Line[0].y - poly.v[i].y};
		points N = getnormal(poly.v[i], poly.v[(i + 1) % poly.npoints], poly.v[(i + 2) % poly.npoints]);
		//points n = N[i];
		double num = dotproduct(W, N);
		double deno = dotproduct(D, N);
		if (deno == 0) {
			if (num < 0) {
				cout << "no";
				exit(0);
			}
			if (num > 0) continue;
		}
		double x = -num / deno;
		if (deno > 0) {
			tl = max(tl, x);
		}
		else tu = min(tu, x);
	}
	if (tl <= tu) {
		double x1 = Line[0].x + (D.x) * tl;
		double y1 = Line[0].y + (D.y) * tl;
		double x2 = Line[0].x + (D.x) * tu;
		double y2 = Line[0].y + (D.y) * tu;
		getch();
		cleardevice();
		for (int i = 0; i < n; i++) {
			line(poly.v[i].x, poly.v[i].y, poly.v[(i + 1) % poly.npoints].x, poly.v[(i + 1) % poly.npoints].y);
		}
		line(x1 , y1 , x2 , y2);
	}
	else cout << "Parallel Line";
	getch();
}
