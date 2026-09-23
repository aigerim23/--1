#include <iostream>
using namespace std;
int main() {
    // Объявление переменных (double позволяет использовать дробные цены)
    double price1, price2, price3, total;
    // Ввод данных
    cout << "Введите стоимость трех товаров: ";
    cin >> price1 >> price2 >> price3;
    // Вычисление
    total = price1 + price2 + price3;
    // Вывод результата
    cout << "Общая сумма = " << total << endl;
    return 0;
}