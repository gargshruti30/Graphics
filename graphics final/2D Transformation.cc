#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

double x[100], y[100];
void multiplyMatrix(double a[3][3], int r1, int c1, double b[3][16], int r2, int c2, double c[3][16]) {
	if (c1 != r2) {
		cout << "Error in multiply matrix" << endl;
		return;
	}
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c2; j++) {
			c[i][j] = 0;
			for (int k = 0; k < r2; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}
void translate(double matrix[3][16], double dx, double dy, double result[3][16]) {
	double transform[3][3] = {
		{1, 0, dx},
		{0, 1, dy},
		{0, 0, 1}
	};
	multiplyMatrix(transform, 3, 3, matrix, 3, 16, result);
}
void scale(double matrix[3][16], double sx, double sy, double result[3][16]) {
	double transform[3][3] = {
		{sx, 0, 0},
		{0, sy, 0},
		{0, 0, 1}
	};
	multiplyMatrix(transform, 3, 3, matrix, 3, 16, result);
}

void rotate(double matrix[3][16], double angleRad, double result[3][16]) {
	double Cos = cos(angleRad);
	double Sin = sin(angleRad);
	double transform[3][3] = {
		{Cos, -Sin, 0},
		{Sin, Cos, 0},
		{0, 0, 1}
	};
	multiplyMatrix(transform, 3, 3, matrix, 3, 16, result);
}
void draw(int n) {
	for (int i = 0; i < n; i++) {
		int x1 = x[i];
		int y1 = y[i];
		int x2 = x[(i + 1) % n];
		int y2 = y[(i + 1) % n];
		line(x1, y1, x2, y2);
	}
}
int main() {
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	cout << "Number of Vertices : ";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Enter coordinates : ";
		cin >> x[i] >> y[i];
	}
	setcolor(WHITE);
	draw(n);
	delay(1000);
	cout << "Available choices : " << endl << "a -> Translation" << endl << "b -> Scaling" << endl << "c -> Rotation" << endl << "-1 -> Exit" << endl;
	char c;
	while (true) {
		double sx, sy;
		double matrix[3][16], result[3][16];
		cout << "Choice : ";
		cin >> c;
		if (c == 'a') {
			cout << "Translation Factor x and y: ";
			cin >> sx >> sy;
			for (int i = 0; i < n; i++)
			{
				matrix[0][i] = x[i];
				matrix[1][i] = y[i];
				matrix[2][i] = 1;
			}
			translate(matrix, sx, sy, result);
			for (int i = 0; i < n; i++)
			{
				x[i] = result[0][i];
				y[i] = result[1][i];

			}
			setcolor(RED);
			draw(n);
			delay(1000);
		}
		else if (c == 'b') {
			cout << "Scaling Factor x and y : ";
			cin >> sx >> sy;
			for (int i = 0; i < n; i++) {
				matrix[0][i] = x[i];
				matrix[1][i] = y[i];
				matrix[2][i] = 1;
			}
			scale(matrix, sx, sy, result);
			for (int i = 0; i < n; i++) {
				x[i] = result[0][i];
				y[i] = result[1][i];
			}
			setcolor(BLUE);
			draw(n);
			delay(1000);
		}
		else if (c == 'c') {
			cout << "Enter Angle : ";
			double angle;
			cin >> angle;
			angle = (3.1428 * angle) / 180.0;
			for (int i = 0; i < n; i++) {
				matrix[0][i] = x[i];
				matrix[1][i] = y[i];
				matrix[2][i] = 1;
			}
			rotate(matrix, angle, result);
			for (int i = 0; i < n; i++) {
				x[i] = result[0][i];
				y[i] = result[1][i];

			}
			setcolor(YELLOW);
			draw(n);
			delay(1000);
		}
		else break;
	}
	delay(1000);
}
