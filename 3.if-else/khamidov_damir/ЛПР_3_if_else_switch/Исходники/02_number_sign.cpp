#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Введите целое число: ";
    cin >> number;

    if (number > 0)
    {
        cout << "Число положительное";
    }
    else if (number < 0)
    {
        cout << "Число отрицательное";
    }
    else
    {
        cout << "Число равно нулю";
    }

    return 0;
}
