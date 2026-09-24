#include <iostream>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c, d, n;
	cin >> a;
	if (a < 100 || a >= 999) {
		cout << "Некорректное значение";
		return 1;
	}
	else {
		b = a / 100;
		c = (a / 10) % 10;
		d = a % 10;
	}
	cin >> n;
	if (b == 6 || c == 6 || d == 6) {
		cout << "Есть 6";
	}
	else if (b == n || c == n || d == n) {
		cout << "Есть " << n;
	}
	else {
		cout << "Цифр нет";
	}
	return 0;
}