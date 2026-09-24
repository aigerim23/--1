#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Введите число: ";
    cin >> x;

    if (x >= 0)
    {
        cout << "Positive";
    }
    else
    {
        cout << "Negative";
    }

    return 0;
}
