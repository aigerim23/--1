#include <iostream>
using namespace std;

int main()
{
    int command;

    cout << "Введите команду от 1 до 3: ";
    cin >> command;

    switch (command)
    {
        case 1:
            cout << "Start";
            break;
        case 2:
            cout << "Settings";
            break;
        case 3:
            cout << "Exit";
            break;
        default:
            cout << "Unknown command";
    }

    return 0;
}
