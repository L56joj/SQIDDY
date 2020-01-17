#include <iostream>
#include <windows.h>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Что нужно посчитать?" << endl;
	double a, b, c;
	char deistvie;
	bool t;
	do {
		cin >> a >> deistvie >> b;
		switch (deistvie)
		{
		case '+':
			c = a + b;
			break;
		case '-':
			c = a - b;
			break;
		case'*':
			c = a * b;
			break;
		case'/':
			if (b == 0)
			{
				cout << "Ошибка" << endl;
			}
			else {
				c = a / b;
			}
			break;

		default:
			cout << "Ошибка";

			break;
		}
		cout << a << deistvie << b << "=" << c << endl;
		cout << "Для повтора нажмите 0" << endl;
		int o;
		cin >> o;
		if (o == 0) {
			t = true;
		}
		else {
			t = false;
		}
	} while (t);
	system("pause");
	return 0;
}

