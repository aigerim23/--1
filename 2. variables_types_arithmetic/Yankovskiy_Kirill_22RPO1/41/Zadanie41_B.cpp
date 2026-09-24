#include <iostream>

using namespace std;

int main() 
{
    int a, b, c, d, e;
    cout << "Введите пять целых чисел:\n";
    cin >> a >> b >> c >> d >> e;

    int max_num = a;
    if (b > max_num) max_num = b;
    if (c > max_num) max_num = c;
    if (d > max_num) max_num = d;
    if (e > max_num) max_num = e;

    cout << "Максимальное число " << max_num << endl;

    return 0;
}