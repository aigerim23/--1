#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, d, e;
	cout << "Введите пять целых чисел:" << endl;
	cin >> a >> b >> c >> d >> e;
	if (a > b && a > c && a > d && a > e)
	{
		cout << "Максимальное число:" << a << endl;
	}
	else if (b > a && b > c && b > d && b > e)
	{
		cout << "Максимальное число:" << b << endl;
	}
	else if (c > a && c > b && c > d && c > e)
	{
		cout << "Максимальное число:" << c << endl;
	}
	else if (d > a && d > b && d > c && d > e)
	{
		cout << "Максимальное число:" << d << endl;
	}
	else if (e > a && e > b && e > c && e > d)
	{
		cout << "Максимальное число:" << e << endl;
	}
}