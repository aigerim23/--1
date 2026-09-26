#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Возраст Антона:";
	cin >> a;
	cout << "Возраст Бориса: ";
	cin >> b;
	cout << "Возраст Виктора:";
	cin >> c;
	if (a > b && a > c)
	{
		cout << "Антон старше всех";
	}
	else if (b > a && b > c)
	{
		cout << "Борис старше всех";
	}
	else if (c > a && c > b)
	{
		cout << "Виктор старше всех";
	}
	else if (a && b > c)
	{
		cout << "Антон и Борис старше Виктора";
	}
	else if (b && c > a)
	{
		cout << "Борис и Виктор старше Антона";
	}
	else if (a && c > b)
	{
		cout << "Антон и Виктор старше Бориса";
	}
	

}
