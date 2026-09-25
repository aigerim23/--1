#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "номер карты(6-14): ";	
	cin >> a;
	switch (a) {
	case 6:
		cout << "Шестерка";
		break;
	case 7:
		cout << "Семерка";
		break;
	case 8:	
		cout << "Восьмерка";
		break;
	case 9:
		cout << "Девятка";
		break;
	case 10:
		cout << "Десятка";
		break;
	case 11:
		cout << "Валет";
		break;
	case 12:
		cout << "Дама";
		break;
	case 13:
		cout << "Король";
		break;
	case 14:
		cout << "Туз";
		break;
	default:
		cout << "Ошибка неверный номер";
		break;
	}
}