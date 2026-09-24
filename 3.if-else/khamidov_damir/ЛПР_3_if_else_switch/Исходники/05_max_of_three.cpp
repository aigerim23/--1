#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int maximum;

    cout << "Введите три числа: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        maximum = a;
    }
    else if (b >= a && b >= c)
    {
        maximum = b;
    }
    else
    {
        maximum = c;
    }

    cout << "Максимальное число: " << maximum;

    return 0;
}
