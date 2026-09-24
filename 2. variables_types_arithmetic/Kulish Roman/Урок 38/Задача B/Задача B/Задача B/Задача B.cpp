#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x1, y1, x2, y2;
	cout << "ВВедите кординаты точки A: ";
		cin >> x1 >> y1;										// 5.5 , 3.5 
	cout << "ВВедите кординаты точки B: ";
		cin >> x2 >> y2;										// 1.5 , 2
		double a = x2 - x1;						// 1.5 - 5.5 = -4
		double b = y2 - y1;						// 2 - 3.5 = -1.5
		double AB = sqrt(a * a + b * b);        // -4 * -4 + -1.5 * -1.5 = 16 + 2.25 = 18.25 в корне это приблизительно = 4.272
		cout << "Отрезок AB равен: " << AB;
}
