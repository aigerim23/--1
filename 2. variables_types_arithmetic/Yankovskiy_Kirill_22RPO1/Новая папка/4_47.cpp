#include <iostream>

using namespace std;

int main() {

    double a, b, c;
    cout << "vvod a, b, c: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {

        if (a == b || b == c || a == c) {
            cout << "ravnobedreniy." << endl;
        }
        else {
            cout << "ne ravnobedreniy" << endl;
        }
    }
    else {
        cout << "ne syshestvyet" << endl;
    }

    return 0;
}