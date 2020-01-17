#include <iostream>
#include <windows.h>
#include <clocale>
using namespace std;


bool r(int n) {
	for(int i = 2; i < n; i++) {
		if(n % i == 0)
			return false;
	}
	return  true;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите число" << endl;
	cin >> n;
	if (r(n)) {
		cout << " Простое" << endl;
	}
	else {
		cout << " Составное" << endl;
	}
	system("pause");
	return  0;
}
