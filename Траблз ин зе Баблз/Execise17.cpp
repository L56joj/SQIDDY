#include <iostream>
#include <windows.h>
#include <clocale>
using namespace std;

double BMI(double weight, double height) {
	return weight / pow((height / 100), 2);
}
void printBMI(double BMI) {
	if (BMI < 18.5) {
		cout << "Underweight" << endl;
	}
	else
		if (18.5 <= BMI && BMI < 25.0) {
			cout << "Normal weight" << endl;
		}
		else
			if (BMI >= 25.0 && BMI < 30.0) {
				cout << "Overweight" << endl;
			}
			else
				cout << "Obesity" << endl;
	return;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double w, h;
	cin >> w >> h;
	printBMI(BMI(w, h));
	system("pause");
	return 0;

}
