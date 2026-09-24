#include <iostream>
#include <cmath>
int main()
{  
    double x1 = 5.5, y1 = 3.5;
    double x2 = 1.5, y2 = 2.0;

    double length = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));

    std::cout << length << std::endl;
    return 0;
}