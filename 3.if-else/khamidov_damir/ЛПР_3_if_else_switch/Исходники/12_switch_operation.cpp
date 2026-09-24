#include <iostream>
using namespace std;

int main()
{
    int operation;
    double a, b;

    cout << "1 - сложение" << endl;
    cout << "2 - вычитание" << endl;
    cout << "3 - умножение" << endl;
    cout << "4 - деление" << endl;
    cout << "Выберите операцию: ";
    cin >> operation;
    cout << "Введите два числа: ";
    cin >> a >> b;

    switch (operation)
    {
        case 1: cout << "Результат: " << a + b; break;
        case 2: cout << "Результат: " << a - b; break;
        case 3: cout << "Результат: " << a * b; break;
        case 4:
            if (b != 0)
            {
                cout << "Результат: " << a / b;
            }
            else
            {
                cout << "На ноль делить нельзя";
            }
            break;
        default: cout << "Операция выбрана неправильно";
    }

    return 0;
}
