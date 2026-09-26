#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int age;
    cout << "Введите возраст: ";
    cin >> age;
    if (age % 100 >= 11 && age % 100 <= 20)
    {
        cout << "Вам " << age << " Лет";
    }
    else if (age >= 121 || age <= 0)
    {
        cout << "Ошибка";
    }
    else if (age % 10 == 1)
    {
        cout << "Вам " << age << " год";
    }
    else if (age % 10 >= 2 && age % 10 <= 4)
    {
        cout << "Вам " << age << " года";
    }
    else if (age % 10 >= 5 && age % 10 <= 9 || age % 10 == 0)
    {
        cout << "Вам " << age << " лет";
    }
    

}

