#include <iostream>

using namespace std;

int main() {
    int age;
    cout << "vvod: ";
    cin >> age;

    string word;

    // Проверка исключений (напр., 11-14, 111-114)
    if (age % 100 >= 11 && age % 100 <= 14) {
        word = "let";
    }
    else {
        int last_digit = age % 10;
        if (last_digit == 1) {
            word = "god";
        }
        else if (last_digit >= 2 && last_digit <= 4) {
            word = "goda";
        }
        else {
            word = "let";
        }
    }

    cout << "vam " << age << " " << word << "." << endl;
    return 0;
}