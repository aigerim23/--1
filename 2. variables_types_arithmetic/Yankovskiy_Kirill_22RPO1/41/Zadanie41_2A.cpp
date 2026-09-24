#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cout << "vvod:" << endl;
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "vse." << endl;
    }
    else if (a == b || b == c || a == c) {
        cout << "dva" << endl;
    }
    else {
        cout << "net" << endl;
    }

    return 0;
}