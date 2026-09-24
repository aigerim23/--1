#include <iostream>
#include <cmath>
#include <clocale>
#include <random>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int c;
	cout << "Введите возраст: ";
	cin >> c;

	if (c < 5)
	{
		cout << "Вам " << c << " года " << endl;
	}
	else if (c >= 5 && c <= 20)
	{
		cout << "Вам " << c << " лет" << endl;
	}
	else if (c >= 20 || c <= 24)
	{
		cout << "Вам " << c << " года" << endl;
	}
	return 0;
}
	

	




	/*
	



	int m;
	cout << "Введите номер месяца: ";
	cin >> m;

	switch (m)
	{
	case 1:
		cout << "Январь" << endl;
		break;
	case 2:
		cout << "Февраль" << endl;
		break;
	case 3:
		cout << "Март" << endl;
		break;
	case 4:
		cout << "Апрель" << endl;
		break;
	case 5:
		cout << "Май" << endl;
		break;
	case 6:
		cout << "Июнь" << endl;
		break;
	case 7:
		cout << "Июль" << endl;
		break;
	case 8:
		cout << "Август" << endl;
		break;
	case 9:
		cout << "Сентябрь" << endl;
		break;
	case 10:
		cout << "Октябрь" << endl;
		break;
	case 11:
		cout << "Ноябрь" << endl;
		break;
	case 12:
		cout << "Декабрь" << endl;
		break;

	default: cout << "Такого месяца не существует" << endl;
		break;
	}
	return 0;
}


























		int a, b, c;

	cout << "Введите три числа: ";
	cin >> a >> b >> c;

	if (a == b && b == c) {
		cout << "Все числа равны" << endl;
	}
	else if (a == b || a == c || b == c)
	{
		cout << "Два числа равны" << endl;
	}
	else
	{
		cout << "Все числа разные" << endl;
	}

	return 0;
}
















	int Anton, Boris, Viktor;
	cout << "возраст антона : ";
	cin >> Anton;
	cout << "возраст бориса : ";
	cin >> Boris;
	cout << "возраст виктора : ";
	cin >> Viktor;

	if (Anton > Boris && Anton > Viktor)
	{
		cout << "Антон старше всех" << endl;
	}
	if (Boris > Anton && Boris > Viktor)
	{
		cout << "Борис старше всех" << endl;
	}
	if (Viktor > Anton && Viktor > Boris)
	{
		cout << "Виктор старше всех" << endl;
	}

	return 0;
}










	int a, b, c, d, e;
	cout << "Введите пять чисел: ";
	cin >> a >> b >> c >> d >> e;
	if (a > b && a > c)
	{
		cout << "Наибольшее число: " << a << endl;
	}
	if (b > a && b > c)
	{
		cout << "Наибольшее число: " << b << endl;
	}
	if (c > a && c > b) {
		cout << "Наибольшее число: " << c << endl;
	}
	if (d > a && d > b && d > c) {
		cout << "Наибольшее число: " << d << endl;
	}
	if (e < a && e < b && e < c && e < d)
		return 0;
}













	int a, b, c;
	cout << "Введите три числа: ";
	cin >> a >> b >> c;
	if (a > b && a > c)
	{
		cout << "Наибольшее число: " << a << endl;
	}
	if (b > a && b > c)
	{
		cout << "Наибольшее число: " << b << endl;
	}
	if (c > a && c > b) {
		cout << "Наибольшее число: " << c << endl;
	}













	random_device rd;

	int n = 100 + rd() % 900;

	cout << "Получено число " << n << endl;

	int a = n / 100;
	int b = n / 10 % 10;
	int c = n % 10;

	cout << "Его цифры " << a << ", " << b << ", " << c << endl;

	return 0;
}









	

	float x1, y1, x2, y2;

	cout << "координаты точки A: ";
	cin >> x1 >> y1;

	cout << "координаты точки B: ";
	cin >> x2 >> y2;

	float AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	cout << "Длина отрезка AB = " << AB << endl;

	return 0;
}







  
---------------------------------------------------------------------------


int main()
{
	float a = 5, b = 7, c = 8, d;

	d = a + b + c;
	cout << a << "+" << b << "+" << c << "=" << d << endl;
	d = 0;


	d = a * b * c;
	cout << a << "*" << b << "*" << c << "=" << a * b * c << endl;

	d = 0;
	d = (a + b + c) / 3;
	cout << "(" << a << "+" << b << "+" << c << ")" << "/" << 3 << "=" << d << endl;

}
*/