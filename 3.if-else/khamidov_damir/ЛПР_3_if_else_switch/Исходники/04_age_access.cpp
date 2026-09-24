#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Введите возраст: ";
    cin >> age;

    if (age >= 18 && age <= 60)
    {
        cout << "Доступ разрешен";
    }
    else
    {
        cout << "Доступ запрещен";
    }

    return 0;
}
