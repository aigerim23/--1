#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int month;
    cout << "Введите номер месяца:" << endl;
    cin >> month;
    if (month == 12 || month == 1 || month == 2)
    {
        cout << "Зима";
    }
    else if (3 <= month && month <=5)
    {
        cout << "Весна";
    }
    else if (6 <= month && month <= 8)
    {
        cout << "Лето";
    }
    else if (9 <= month && month <= 11)
    {
        cout << "Осень";
    }
    else
    {
        cout << "Неверный номер месяца";
    }

}
