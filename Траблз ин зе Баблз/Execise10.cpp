#include <iostream>
#include <windows.h>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, c, s;
	bool t;
	do {
		cout << "Введите число и степень" << endl;
		cin >> a >> c;
		s = a;
		if ((c == 0) && (a == 0)) cout << 1 << endl;
		//else if (c == 0) cout << 1 << endl;
	//	else if (a == 0) cout << 0 << endl;
		else if (c < 0) {
			for (int i = -1; i > c; i--) {
				a *= s;
				a = 1 / a;
			}
			cout << a << endl;
		}
		else {
			for (int i = 1; i < c; i++)
				a *= s;
			cout << a << endl;
		}
		int  f;
		cout << "Для повтора нажмите 0" << endl;
		cin >> f;
		if (f != 0) {
			t = false;
		}
		else t = true;
	} while (t);
	system("pause");
	return 0;
}

