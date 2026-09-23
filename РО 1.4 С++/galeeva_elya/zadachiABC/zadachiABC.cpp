#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0)); // Инициализация генератора случайных чисел

    // Генерация случайного трехзначного числа (от 100 до 999)
    int num = 100 + rand() % (999 - 100 + 1);

    int hundreds = num / 100;          // Первая цифра (сотни)
    int tens = (num / 10) % 10;        // Вторая цифра (десятки)
    int units = num % 10;              // Третья цифра (единицы)

    cout << "Получено число " << num << "." << endl;
    cout << "Его цифры " << hundreds << ", " << tens << ", " << units << "." << endl;

    return 0;
}