#include <Windows.h>
#include <iostream>
#include <clocale>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите количество жлементов (от 0 до 9)" << endl;
	cin >> n;
	vector <int> array(n);
	if ((n <= 0) || (n >= 9)) cout << "Не допустимое количество элементов" << endl;
	else {
		cout << "Введите элементы массива" << endl;
		for (int i = 0; i <= n; i++)
			cin >> array[i];
		for (int i = 0; i <= n; i++)
			cout << array[i] << ' ';
	}
	system("pause");
	return 0;
}

