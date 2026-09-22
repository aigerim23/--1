#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double xA, yA, xB, yB;
    cout << "Введите координаты точки A (xA, yA): ";
    cin >> xA >> yA;
    cout << "Введите координаты точки B (xB, yB): ";
    cin >> xB >> yB; 
    double distance = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
    cout << "Расстояние между точками A и B: " << distance << endl;




}