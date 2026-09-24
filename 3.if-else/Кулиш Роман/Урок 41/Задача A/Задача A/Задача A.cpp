#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите три целых числа: " << endl;
	cin >> a >> b >> c;
	if (a > b && a > c)
	{
		cout << "Наибольшее число: " << a << endl;
	}
	else if (b > a && b > c)
	{
		cout << "Наибольшее число: " << b << endl;
	}
	else if (c > a && c > b)
	{
		cout << "Наибольшее число: " << c << endl;
	}
}