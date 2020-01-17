#include<iostream>
#include<Windows.h>
using namespace std;

int main() {
	double x0, V0, t, g = -9.8, xt1, xt2;
	cout << "x0=";
	cin >> x0;
	cout << "V0=";
	cin >> V0;
	cout << "t=";
	cin >> t;
	xt1 = g * t * t * 1 / 2;
	xt2 = 1.0 / 2 * g * t * t;
	cout << "xt=" << xt1 << "or xt=" << xt2 << endl;
	system("pause");
	return 0;
}
