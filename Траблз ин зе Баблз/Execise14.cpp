#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	int s, l1, l2, r1, r2, x1, x2;
	cin >> s >> l1 >> r1 >> l2 >> r2;
	bool t = false;
	for (x1 = l1; x1 < r1; x1++) { //подбор чисел 
		x2 = s - x1;
		if ((x2 >= l2) && (x2 <= r2)){//число входит  данный отрезок
				cout << x1 << " " << x2 << endl;
				t = true;
				break;
		}
	}
	if (!t)
		cout << -1 << endl;
	system("pause");
	return 0;
}


