#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите три целых числа : \n";
	cin >> a >> b >> c;
	cout << a << "+" << b << "+" << c << "=" << a + b + c;
	cout << "\n" << a << "*" << b << "*" << c << "=" << a * b * c;
	cout << "\n" << "(" << a << "+" << b << "+" << c << ")" << "/3=" << (a + b + c) / 3.;
	
}