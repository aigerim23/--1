#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Введите целое число: ";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "Число четное";
    }
    else
    {
        cout << "Число нечетное";
    }

    return 0;
}
