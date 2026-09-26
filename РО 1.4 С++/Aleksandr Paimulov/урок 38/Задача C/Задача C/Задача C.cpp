#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int abc;
    cin >> abc;
    int a, b, c;
    a = abc / 100;            
    b = (abc % 100) / 10;        
    c = abc % 10;        
    cout << ("Первая цифра: ") << a << endl;
    cout << ("Вторая цифра: ") << b << endl;
    cout << ("Третья цифра: ") << c << endl;
}