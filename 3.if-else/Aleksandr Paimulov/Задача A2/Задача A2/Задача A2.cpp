#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите три числа:" << endl;
	cin >> a >> b >> c;
	if (a == b && a == c)
	{
		cout << "Все числа одинаковые.";
	}
	else if (a == b || a == c || b == c)
	{
		cout << "Два числа одинаковые.";
	}
	else if (a != b || a != c || b != c)
	{
		cout << "Нет одинаковых чисел.";
	}
}