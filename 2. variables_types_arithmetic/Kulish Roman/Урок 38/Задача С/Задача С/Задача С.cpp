#include <iostream>
#include <random>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int abc;
	cin >> abc;
	int a, b, c;
	a = abc / 100;			// Первая цифра
	b = (abc % 100) / 10;		// Вторая цифра
	c = abc % 10;		// Третья цифра
	cout << ("Первая цифра: ") << a << endl;
	cout << ("Вторая цифра: ") << b << endl;
	cout << ("Третья цифра: ") << c << endl;
}