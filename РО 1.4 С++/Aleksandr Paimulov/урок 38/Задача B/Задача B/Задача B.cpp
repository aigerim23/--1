#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
    double x1, y1, x2, y2;
    cout << "ВВедите кординаты точки A: ";
    cin >> x1 >> y1;                                        
    cout << "ВВедите кординаты точки B: ";
    cin >> x2 >> y2;                                        
    double a = x2 - x1;                       
    double b = y2 - y1;                       
    double AB = sqrt(a * a + b * b);        
    cout << "Отрезок AB равен: " << AB;
}