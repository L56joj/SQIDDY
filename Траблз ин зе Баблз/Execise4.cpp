#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
	double a, b;
	int m, l, c;
	cin >> a >> b >> m >> l;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "a=" << a;
	cout << "b=" << b;
	c = m;
	m = l;
	l = c;
	cout << "m=" << m;
	cout << "l=" << l;
	system("pause");
	return 0;
}