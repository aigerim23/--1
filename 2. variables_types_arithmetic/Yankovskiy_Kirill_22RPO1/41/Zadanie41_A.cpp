#include <iostream>

using namespace std;

int main() 
{
    int a, b, c;
    cout << "Введите три целых числа:\n";
    cin >> a >> b >> c;

    int max_num = a;
    if (b > max_num) max_num = b;
    if (c > max_num) max_num = c;

    cout << "Максимальное число " << max_num << endl;

    return 0;
}