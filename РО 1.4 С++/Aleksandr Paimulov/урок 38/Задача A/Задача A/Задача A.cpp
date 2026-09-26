#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите три целых числа:" << endl;
	int a, b, c;
	cin >> a >> b >> c;
	cout << a << "+" << b << "+" << c << "=" << a + b + c << endl;
	cout << a << "*" << b << "*" << c << "=" << a * b * c << endl;
	cout << "(" << a << "+" << b << "+" << c << ")" << "/3" << "=" << (a + b + c) / 3.;



}