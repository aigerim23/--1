#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double a, b, c, h, P;
	cin >> a >> b >> h;
	c = sqrt(pow(h, 2) + pow(((a - b) / 2.0), 2));
	P = a + b + 2 * c;
	cout << P;
}