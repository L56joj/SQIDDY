#include <iostream>
#include <windows.h>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	double a, b, c;
	double  d, x, x1, x2;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	if ((a == 0) && (b == 0) && (c == 0)) cout << "х - любое" << endl;
	else if ((a == 0) && (b == 0)) cout << "Решений нет" << endl;
	else {
		d = b * b - 4 * a * c;
		x = -b / 2 / a;
		x1 = (sqrt(d) - b) / 2 / a;
		x2 = (-b - sqrt(d)) / 2 / a;
		if (d < 0) {
			cout << "Действительных корней нет." << "\n";
		}
		else if (d == 0) {
			cout << "x=" << x << "\n";
		}
		else if (a == 0) {
			cout << "x=" << -c / b << "\n";
		}
		else {
			cout << "x1=" << x1 << "\n";
			cout << "x2=" << x2 << "\n";
		}
	}
	system("pause");
}