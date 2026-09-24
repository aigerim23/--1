#include <iostream>
using namespace std;

int main()
{
    int month;

    cout << "Введите номер месяца: ";
    cin >> month;

    switch (month)
    {
        case 1: cout << "Январь"; break;
        case 2: cout << "Февраль"; break;
        case 3: cout << "Март"; break;
        case 4: cout << "Апрель"; break;
        case 5: cout << "Май"; break;
        case 6: cout << "Июнь"; break;
        case 7: cout << "Июль"; break;
        case 8: cout << "Август"; break;
        case 9: cout << "Сентябрь"; break;
        case 10: cout << "Октябрь"; break;
        case 11: cout << "Ноябрь"; break;
        case 12: cout << "Декабрь"; break;
        default: cout << "Такого месяца нет";
    }

    return 0;
}
