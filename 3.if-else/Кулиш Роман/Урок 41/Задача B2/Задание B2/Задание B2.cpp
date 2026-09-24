#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите номер месяца: " << endl;
	cin >> a;


	if (a == 12 || a == 1 || a == 2)
	{
		cout << "Зима" << endl;
	}

	else if (a == 3 || a == 4 || a == 5)
	{
		cout << "Весна" << endl;
	}

	if (a == 6 || a == 7 || a == 8)
	{
		cout << "Лето" << endl;
	}

	if (a == 9 || a == 10 || a == 11)
	{
		cout << "Осень" << endl;
	}

	if (a < 1 || a > 12)
	{
		cout << "Неверный номер месяца." << endl;
	}
}