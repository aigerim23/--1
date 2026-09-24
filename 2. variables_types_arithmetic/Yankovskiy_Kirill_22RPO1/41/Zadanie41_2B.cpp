#include <iostream>

using namespace std;

int main() {
    // Настройка вывода русского языка в консоли
    setlocale(LC_ALL, "Russian");

    int month;
    cout << "Введите номер месяца:\n";
    cin >> month;

    if (month == 12 || month == 1 || month == 2) {
        cout << "zima.\n";
    }
    else if (month >= 3 && month <= 5) {
        cout << "vesna.\n";
    }
    else if (month >= 6 && month <= 8) {
        cout << "leto.\n";
    }
    else if (month >= 9 && month <= 11) {
        cout << "osen`.\n";
    }
    else {
        cout << "Неверный номер месяца.\n";
    }

    return 0;
}