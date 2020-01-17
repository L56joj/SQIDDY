#include <iostream>
#include <windows.h>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i;
	int c;
	bool t;
	cout << "Введите число факториала" << endl;
	do {
		cin >> n;
		c = 1;
		for (i = 1; i <= n; i++) {
			c = c * i;
		}
		cout << c << endl;
		cout << "Для повтора нажмите 0" << endl;
		int f;
		cin >> f;
		if (f == 0) {
			t = true;
		}
		else {
			t = false;
		}
	} while (t);
	
	system("pause");
	return 0;
}