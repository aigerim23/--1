#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(nullptr));

    int number = 100 + rand() % 900;
    cout << number << endl;

    int digit1 = number / 100;         
    int digit2 = (number / 10) % 10;   
    int digit3 = number % 10;          

   
    cout << digit1 << ", " << digit2 << ", " << digit3 << endl;
    return 0;
}