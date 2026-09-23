#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // --- ЗАДАЧА А ---
    cout << "=== ЗАДАЧА А ===" << endl;
    int a, b, c;
    cout << "Введите три целых числа: ";
    cin >> a >> b >> c;

    int sum = a + b + c;
    int product = a * b * c;
    double average = static_cast<double>(sum) / 3;

    cout << a << "+" << b << "+" << c << "=" << sum << endl;
    cout << a << "*" << b << "*" << c << "=" << product << endl;
    cout << "(" << a << "+" << b << "+" << c << ")/3=" << fixed << setprecision(3) << average << endl;
    cout << endl;

    // --- ЗАДАЧА Б ---
    cout << "=== ЗАДАЧА Б ===" << endl;
    double x1, y1, x2, y2;
    cout << "Введите координаты точки A (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Введите координаты точки B (x2 y2): ";
    cin >> x2 >> y2;

    double length = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "Длина отрезка AB = " << fixed << setprecision(3) << length << endl;
    cout << endl;

    // --- ЗАДАЧА С ---
    cout << "=== ЗАДАЧА С ===" << endl;
    srand(time(0)); // Инициализация генератора случайных чисел

    int num = 100 + rand() % (999 - 100 + 1); // Трехзначное число от 100 до 999

    int hundreds = num / 100;       // Первая цифра (сотни)
    int tens = (num / 10) % 10;     // Вторая цифра (десятки)
    int units = num % 10;           // Третья цифра (единицы)

    cout << "Получено число " << num << "." << endl;
    cout << "Его цифры: " << hundreds << ", " << tens << ", " << units << "." << endl;

    return 0;
}