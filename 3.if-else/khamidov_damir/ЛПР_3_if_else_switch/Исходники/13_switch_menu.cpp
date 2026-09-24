#include <iostream>
using namespace std;

int main()
{
    int menu;

    cout << "1 - Profile" << endl;
    cout << "2 - Messages" << endl;
    cout << "3 - Settings" << endl;
    cout << "4 - Help" << endl;
    cout << "5 - Exit" << endl;
    cout << "Выберите пункт меню: ";
    cin >> menu;

    switch (menu)
    {
        case 1: cout << "Profile"; break;
        case 2: cout << "Messages"; break;
        case 3: cout << "Settings"; break;
        case 4: cout << "Help"; break;
        case 5: cout << "Exit"; break;
        default: cout << "Неправильный пункт меню";
    }

    return 0;
}
