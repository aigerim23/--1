#include <iostream>
using namespace std;

int main() {
	//первое задание (за понедельник)
	std::setlocale(LC_ALL, "Russian");
	cout << "Вася" << endl;
	cout << "        Пошел" << endl;
	cout << "                     Гулять" << endl;
	//второе задание (за понедельник)
	cout << "   Ж" << endl;
	cout << "  ЖЖЖ" << endl;
	cout << " ЖЖЖЖЖ" << endl;
	cout << "ЖЖЖЖЖЖЖ" << endl;
	cout << " ZZ ZZ" << endl;
	cout << " HH HH" << endl;
	//задание А сумма, произведения, среди трех чисел
	int a, b, c;
	cout << "Введите три числа: ";
	cin >> a >> b >> c;
	cout << "Сумма: " << a + b + c << endl;
	cout << "Произведение: " << a * b * c << endl;
	cout << "Среднее арифметическое: " << (a + b + c) / 3.0 << endl;
	//задание Б найти растояние мужду двумя точками AB 
	cout << "Введите координаты точки A (x1, y1): ";
	cin >> a >> b;
	cout << "Введите координаты точки B (x2, y2): ";
	cin >> c >> b;
	double distance = sqrt(pow(c - a, 2) + pow(b - b, 2));
	cout << "Расстояние между точками A и B: " << distance << endl;
	// задание С - случайное трехзначное число числа через запятую от 100 до 999
	srand(time(0));
	int random_number = rand() % 900 + 100;
	cout << "Случайное трехзначное число: " << random_number << endl;
	return 0;
}