#include <iostream>
using namespace std;
void t1() {
	int a, b, c,s;
	cin >> a >> b >> c;
	if (a > b && a > c) {
		s = a;
	}
	else if (b > a && b > c) {
		s = b;
	}
	else {
		s = c;
	}
	cout << s;
}
void t2() {
	int a, b, c, s, z, x;
	cin >> a >> b >> c >> z >> x;
	if (a > b && a > c && a > z && a > x) {
		s = a;
	}
	else if (b > a && b > c && b > z && b > x) {
		s = b;
	}
	else if (c > a && c > b && c > z && c > x) {
		s = c;
	}
	else if (z > a && z > b && z > c && z > x) {
		s = z;
	}
	else {
		s = x;
	}
	cout << s;
}
void t3() {
	int a, b, c, s;
	cout << "Антон:";
	cin >> a;
	cout << "Борис:";
	cin >> b;
	cout << "Владимир:";
	cin >> c; 
	if (a > b && a > c) {
		s = a;
		cout << "Самый старший: Антон";
	}
	else if (b > a && s = b;b > c) {
		
		cout << "Самый старший: Борис";
	}
	else if (a == b && a > c && b > c) {
		s = a;
		cout << "Самый старший: Антон и Борис";

	}
	else if (a == c && a > b && c > b) {
		s = a;
		cout << "Самый старший: Антон и Владимир";
	}
	else if (b == c && b > a && c > a) {
		s = b;
		cout << "Самый старший: Борис и Владимир";
	}
	else if (c > a && c > b) {
		s = c;
		cout << "Самый старший: Владимир";
	}
	
}
void t4() {
	int a, b, c, s;
	cin >> a >> b >> c;
	if (a == b && a == c) {
		cout << "все числа равны";
	}
	else if (a == b && a != c) {
		cout << "Два числа равны: " << a << " и " << b;
	}
	else if (a == c && a != b) {
		cout << "Два числа равны: " << a << " и " << c;
	}
	else if (b == c && b != a) {
		cout << "Два числа равны: " << b << " и " << c;
	}
	else {
		cout << "Все числа разные";
	}
}
void t5() {
	int a ;
	cout << "Введите число(1-12): ";
	cin >> a;
	if(a>=1 && a<=2 && a==12) {
		cout << "Зима";
	}
	else if(a>=3 && a<=5) {
		cout << "Весна";
	}
	else if(a>=6 && a<=8) {
		cout << "Лето";
	}
	else if(a>=9 && a<=11) {
		cout << "Осень";
	}
	else {
		cout << "Некорректный ввод";
	}

}
void t6() {
	int a;
	cin >> a;
	if (a < 5&&a==21&&a==31&&a==41&&a==51&&a==61&&a==71&&a==81&&a==91&&a==101) {
		cout << a << "год";
	}
	else if (a > 10&&a>5) {
		cout << a << "лет";
	}
	else if (a >= 5 && a <= 20) {
		cout << a << "лет";
	}
	else if (a > 20 && a < 25) {
		cout << a << "года";
	}
	else if (a > 30 && a < 35) {
		cout << a << "года";
	}
	else if (a > 40 && a < 45) {
		cout << a << "года";
	}
	else if (a > 50 && a < 55) {
		cout << a << "года";
	}
	else if (a > 60 && a < 65) {
		cout << a << "года";
	}
	else if (a > 70 && a < 75) {
		cout << a << "года";
	}
	else if (a > 80 && a < 85) {
		cout << a << "года";
	}
	else if (a > 90 && a < 95) {
		cout << a << "года";
	}
	else if (a > 100 && a < 105) {
		cout << a << "года";
	}
	else if (a >= 25 && a <= 30) {
		cout << a << "лет";
	}
	else if (a >= 35 && a <= 40) {
		cout << a << "лет";
	}
	else if (a >= 45 && a <= 50) {
		cout << a << "лет";
	}
	else if (a >= 55 && a <= 60) {
		cout << a << "лет";
	}
	else if (a >= 65 && a <= 70) {
		cout << a << "лет";
	}
	else if (a >= 75 && a <= 80) {
		cout << a << "лет";
	}
	else if (a >= 85 && a <= 90) {
		cout << a << "лет";
	}
	else if (a >= 95 && a <= 100) {
		cout << a << "лет";
	}
	else {
		cout << "Некорректный ввод";
}
int main() {
	setlocale(LC_ALL, "Russian");
	int choice;
	cout << "Выберите задачу : ";
	cin >> choice;
	switch (choice) {
	case 1:
		t1();
		break;
	case 2:
		t2();
		break;
	case 3:
		t3();
		break;
	case 4:
		t4();
		break;
	case 5:
		t5();
		break;
	case 6:
		t6();
		break;
	}
}