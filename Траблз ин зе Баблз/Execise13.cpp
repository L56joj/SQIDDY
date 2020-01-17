#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
	int x, n;
	bool t;
	cin >> n;
	if (n == 0)
		cout << 0 << endl;
	else {
		if (n == 1)
			cout << 1 << endl;
		else {
			for (int i = 0; i < n; i++) {
				x = log2(i); //находим все числа, являющиеся степенью двойки
				if (x < n) {
					x = x + 1;
				}
			}
			cout << x << endl;
		}
	}
	
	system("pause");
		return 0;
}

