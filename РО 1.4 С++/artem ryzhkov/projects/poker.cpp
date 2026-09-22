#include <iostream>
#include <random>
using namespace std;
int main(){
    int a, b, c, f;
    srand(time(0));
    a = 100 + rand() % 900;
    b = a / 100;
    c = (a / 10) % 10;
    f = a % 10;
    cout << "Случайное число: " << a << endl;
    cout << "первая цифра: " << b << endl;
    cout << "вторая цифра: " << c << endl;
    cout << "третья цифра: " << f << endl;
    
}
