#include <iostream>
#include <clocale>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cin >> n;
    if (n < 100 || n >= 999) { 
        cout << "Некорректное число"; 
        return 1;
    }
    else {
        int a = n / 10;
        int b = n % 10;
        int x = b * 100 + a;
        cout << x;
    }
    return 0;
}