#include <iostream>
using namespace std;

int main()
{
    int age = 20;
    int score = 75;
    bool blocked = false;

    cout << "age >= 18: " << (age >= 18) << endl;
    cout << "age >= 18 && age <= 60: "
         << (age >= 18 && age <= 60) << endl;
    cout << "score >= 50 || age >= 21: "
         << (score >= 50 || age >= 21) << endl;
    cout << "!blocked: " << (!blocked) << endl;
    cout << "age < 18 || score >= 70: "
         << (age < 18 || score >= 70) << endl;

    return 0;
}
