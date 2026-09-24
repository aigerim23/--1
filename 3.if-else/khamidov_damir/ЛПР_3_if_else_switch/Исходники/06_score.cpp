#include <iostream>
using namespace std;

int main()
{
    int score;

    cout << "Введите количество баллов от 0 до 100: ";
    cin >> score;

    if (score < 0 || score > 100)
    {
        cout << "Количество баллов введено неправильно";
    }
    else if (score >= 90)
    {
        cout << "Отлично";
    }
    else if (score >= 75)
    {
        cout << "Хорошо";
    }
    else if (score >= 50)
    {
        cout << "Зачет";
    }
    else
    {
        cout << "Незачет";
    }

    return 0;
}
