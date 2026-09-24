#include <iostream>

using namespace std;

int main() {

    int num;
    cout << "vvod chisla: ";
    cin >> num;

    
    int d1 = num / 100;
    int d2 = (num / 10) % 10;
    int d3 = num % 10;   

    int result = d1 * 100 + d3 * 10 + d2;

    cout << "Полученное число: " << result << endl;

    return 0;
}