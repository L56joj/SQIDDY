#include<iostream>
#include<windows.h>
#include<clocale>
#include<cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int s=0;
	double max = 0;
	double min = 0;
	double a, b, x, z, xs, xe, dx;
	cout << "Введите значение переменных: ";
	cin >> a >> b;
	cout << "Введите границы промежутка:" << '\n' << " х (начальное) = ";
	cin >> xs;
	cout << " х (конечное) = ";
	cin >> xe;
	cout << "Введите размер шага: ";
	cin >> dx;
	double* array = new double[10000];
	    for (x = xs; x <= xe + dx; x += dx) {
			if(x<=a+dx) //при (x<=a) позиция, где z=a переходит в следующий вариант (z=1)
			z = log(x);
			else if ((x > a+dx) && (x < b))
			z = 1;
			else if (x >= b)
			z = exp(x);
			s++;
			if (z > max) max = z;
			if (z < min) min = z;
			cout << z << " ";
		}
	cout << endl;
	cout << "Максимальное значение: " << max << endl;
	cout << "Минимальное значение: " << min << endl;
	system("pause");
	return 0;
}