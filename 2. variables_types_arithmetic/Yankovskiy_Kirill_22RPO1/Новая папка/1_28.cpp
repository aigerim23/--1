#include <iostream>

using namespace std;

int main() {

    double a;
    cout << "vvedite dliny rebra cuba: ";
    cin >> a;

    double volume = a * a * a;
    double lateral_area = 4 * a * a;

    cout << "Объем куба: " << volume << endl;
    cout << "Площадь боковой поверхности: " << lateral_area << endl;

    return 0;
}
