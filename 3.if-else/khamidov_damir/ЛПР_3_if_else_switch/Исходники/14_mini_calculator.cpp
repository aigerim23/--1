#include <iostream>
using namespace std;

int main()
{
    int operation;
    double firstNumber, secondNumber;

    cout << "Мини-калькулятор" << endl;
    cout << "1 - Addition" << endl;
    cout << "2 - Subtraction" << endl;
    cout << "3 - Multiplication" << endl;
    cout << "4 - Division" << endl;
    cout << "Выберите операцию: ";
    cin >> operation;
    cout << "Введите первое число: ";
    cin >> firstNumber;
    cout << "Введите второе число: ";
    cin >> secondNumber;

    switch (operation)
    {
        case 1:
            cout << "Результат: " << firstNumber + secondNumber;
            break;
        case 2:
            cout << "Результат: " << firstNumber - secondNumber;
            break;
        case 3:
            cout << "Результат: " << firstNumber * secondNumber;
            break;
        case 4:
            if (secondNumber == 0)
            {
                cout << "Ошибка: на ноль делить нельзя";
            }
            else
            {
                cout << "Результат: " << firstNumber / secondNumber;
            }
            break;
        default:
            cout << "Такой операции нет";
    }

    return 0;
}
