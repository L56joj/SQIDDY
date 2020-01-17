
#include <iostream>
#include<windows.h>
#include<clocale>
#include<ctime>
using namespace std;
int main()
{
	int min, max, a[20];
	srand(time(0));
	for (int i = 0; i < 20; i++)
		a[i] = rand() % 201 - 100;
	for (int i = 0; i < 20; i++)
	cout << a[i] << " ";
	cout << endl;
	max = a[0];
	min = a[0];
	for (int i = 1; i < 20; i++) {
		if (max < a[i]) max = a[i];
		if (min > a[i]) min = a[i];
	}
	cout << "max:"<< max << endl;
	cout << "min:"<< min << endl; 
	system("pause");
	return 0;
}

