﻿#include <Windows.h>
#include <iostream>
#include<clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Результат вычисления выражения 2+2*2=" << 2 + 2 * 2 << endl;
	system("pause");
	return 0;
}
