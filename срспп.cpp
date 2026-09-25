// срсп.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>


using namespace std;

void task1() {
    double a, b, S;
    cout << "Введите a и b: ";
    cin >> a >> b;
    S = a + b;
    cout << "Результат: " << S << endl;
}

void task2() {
    double a, b, S;
    cout << "Введите длину и ширину: ";
    cin >> a >> b;
    S = a * b;
    cout << "Результат: " << S << endl;
}

void task3() {
    double a, S;
    cout << "Введите сторону: ";
    cin >> a;
    S = a * a;
    cout << "Результат: " << S << endl;
}

void task4() {
    double a, S;
    cout << "Введите градусов C: ";
    cin >> a;
    S = a * 9.0 / 5.0 + 32; 
    cout << "Результат: " << S << endl;
}

void task5() {
    double a, S;
    cout << "Введите часы: ";
    cin >> a;
    S = a * 60;
    cout << "Результат: " << S << endl;
}

void task6() {
    double a, S;
    cout << "Введите метры: ";
    cin >> a;
    S = a * 100;
    cout << "Результат: " << S << endl;
}

void task7() {
    double a, S;
    cout << "Введите килограммы: ";
    cin >> a;
    S = a * 1000;
    cout << "Результат: " << S << endl;
}

void task8() {
    double a, b, S;
    cout << "Введите цену и количество: ";
    cin >> a >> b;
    S = a * b;
    cout << "Результат: " << S << endl;
}

void task9() {
    double a, S;
    cout << "Введите возраст: ";
    cin >> a;
    S = a + 1;
    cout << "Результат: " << S << endl;
}

void task10() {
    double a, S;
    cout << "Введите радиус: ";
    cin >> a;
    S = 2 * 3.14 * a; 
    cout << "Результат: " << S << endl;
}

void task11() {
    double a, b, S;
    cout << "Введите a и b: ";
    cin >> a >> b;
    S = (a + b) * 2;
    cout << "Результат: " << S << endl;
}

void task12() {
    double a, b, S;
    cout << "Введите две оценки: ";
    cin >> a >> b;
    S = (a + b) / 2;
    cout << "Результат: " << S << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int choice;
    cout << "Введите номер задачи (1-12): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        task1();
        break;
    case 2:
        task2();
        break;
    case 3:
        task3();
        break;
    case 4:
        task4();
        break;
    case 5:
        task5();
        break;
    case 6:
        task6();
        break;
    case 7:
        task7();
        break;
    case 8:
        task8();
        break;
    case 9:
        task9();
        break;
    case 10:
        task10();
        break;
    case 11:
        task11();
        break;
    case 12:
        task12();
        break;
    default:
        cout << "Неверный номер задачи!" << endl;
        break;
    }

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
