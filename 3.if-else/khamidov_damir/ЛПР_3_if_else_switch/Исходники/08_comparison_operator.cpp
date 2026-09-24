#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Введите возраст: ";
    cin >> age;

    if (age == 18)
    {
        cout << "Возраст равен 18";
    }
    else
    {
        cout << "Возраст не равен 18";
    }

    return 0;
}
