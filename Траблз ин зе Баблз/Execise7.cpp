#include <iostream>
#include <windows.h>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
   int vetochka; bool listik; 
   do{
	cout << "Выберите способ ввода данных:" << endl << "1.По длине сторон" << "   " << "2.По координатам вершин" << endl;
	cin >> vetochka;
	
		switch (vetochka) {
		case 1: //константное выражение
			double a, b, c;
			cout <<"Ввидите длины сторон" << endl;
			cin >> a >> b >> c;
			if (a <= 0 || b <= 0 || c <= 0 || (a + b) <= c || (b + c) <= a || (a + c) <= b) { //проверка на существование треугольника
				cout << "Введенны некорректные данные. Попробуйте ещё раз" << endl;
			
			}
			else {
				double p = (a + b + c) / 2;
				cout << "S=" << sqrt(p*(p-a)*(p-b)*(p-c))<<endl;//формула Герона
			}
			break;
		case 2: //константное выражение
			double X1, Y1, X2, Y2, X3, Y3;
			cout<<"Введите координаты вершин" << endl ;
			cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3;
			if ((X1 == X2 && X1 == X3) || (Y1 == Y2 && Y2 == Y3) ||
				(X1 == X2 && Y1 == Y2) || (X2 == X3 && Y2 == Y3) || (X1 == X3 && Y1 == Y3)) { //проверка на существование треугольника
				cout << "Введенны некорректные данные. Попробуйте ещё раз"<<endl;
			}
			else {
				cout << "S=" << abs((X2-X1)*(Y3-Y1)-(Y2-Y1)*(X3-X1))/2 << endl; //площадь через координаты 

			}
			break;
		default: cout << "Можно выбрать только одно из доступных значений"<<endl; //несовпадение проверяемого значения с доступными
		}
		cout << "Для повтора нажмите 1" << endl;
		int povtor;
		cin >> povtor;
		if (povtor == 1) {
			listik = true;
		}
		else {
			listik = false;
		}
	} 
   while (listik);
	system("pause");
}
