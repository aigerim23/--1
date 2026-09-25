#include <iostream>
#include <cmath>
using namespace std;

void task_1_7() {
    int a = 5, b = 10, c = 15;
    cout << a << "  " << b << "  " << c << endl << endl;
}

void task_2_7() {
    int length = 543;
    int side = 130;
    int count = length / side;
    cout << count << endl << endl;
}

void task_2_36() {
    int a3 = 4, a2 = 5, a1 = 6;
    int b2 = 7, b1 = 8;

    int s1 = (a1 + b1) % 10;
    int p1 = (a1 + b1) / 10;

    int s2 = (a2 + b2 + p1) % 10;
    int p2 = (a2 + b2 + p1) / 10;

    int s3 = a3 + p2;

    cout << s3 << " " << s2 << " " << s1 << endl << endl;
}

void task_4_7() {
    double a, b;
    cin >> a >> b;

    double max_val = (a > b) ? a : b;
    double min_val = (a < b) ? a : b;

    cout << max_val << "\n" << min_val << endl << endl;
}

void task_4_119() {
    int a = 1, b = 1, c = 4, d = 4;

    bool rook = (a == c) || (b == d);
    bool bishop = (abs(a - c) == abs(b - d));
    bool king = (abs(a - c) <= 1 && abs(b - d) <= 1 && (a != c || b != d));
    bool queen = rook || bishop;
    bool knight = (abs(a - c) == 2 && abs(b - d) == 1) || (abs(a - c) == 1 && abs(b - d) == 2);

    cout << rook << endl;
    cout << bishop << endl;
    cout << king << endl;
    cout << queen << endl;
    cout << knight << endl << endl;
}

int main() {
    task_1_7();
    task_2_7();
    task_2_36();
    task_4_119();

    return 0;
}