

#include <iostream>
#include <windows.h>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int* a;
	int n, t;
	cin >> n;
	if (n <= 0) {
		cout << "Некорректные данные" << endl;
		return 1;
	}
	a = new int[n];
	
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	delete[] a;

	system("pause");
	return 0;
}



