#include <iostream>

using namespace std;

int main() {
    int total_seconds;
    cin >> total_seconds;

    int minutes = total_seconds / 60;
    int remaining_seconds = total_seconds % 60;

    cout << minutes << " " << remaining_seconds << endl;

    return 0;
}
