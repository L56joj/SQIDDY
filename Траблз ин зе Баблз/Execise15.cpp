#include <iostream>
#include <windows.h>
#include <clocale>
using namespace std;

void mip(int* a, int n) 
{
	int m;
	for (int i = 0; i < n -1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				m = a[j];
				a[j] = a[j + 1];
				a[j + 1] = m;
			}
		}
	
	}
	return;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int* a;
	int  t , s;
	cout << "Введите количество элементов" << endl;
	cin >> s;
	if (s <= 0) {
		cout << "Некорректные данные" << endl;
		return 1;
	}

	a = new int[s];
	for (int i = 0; i < s; i++) 
		cin >> a[i];
	cout << endl;
		
		if (s < 5) {
			for (int i = 0; i < s; i++) {
				mip(a, i + 1);
				for (int j = 0; j < i + 1; j++) {
					if (j < s)
						cout << a[i - j] << " ";
				}
				cout << endl;
			}
		}
		else {

			for (int i = 0; i < s; i++) {
				mip(a, i + 1);

				for (int j = 0; j < i + 1; j++) {
					if (i < 5) {
						cout << a[i - j] << " ";//обеспечиает обратный порядок вывода элементов массиа
					}
					else if (j< 5) 
					cout << a[4-j] << " "; //обеспечиает тот самый ТОП-5

				}
				cout << endl;
			}
		}
	delete [] a;
	system("pause");
	return 0;
}


