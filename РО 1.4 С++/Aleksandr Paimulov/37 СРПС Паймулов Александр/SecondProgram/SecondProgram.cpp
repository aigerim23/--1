#include <iostream>
using namespace std;

int main()
{
	double a, b,  S;
	char c;
	cout << "enter the number : ";
	cin >> a;
	cout << "enter the second number : ";
	cin >> b;
	cout << "enter the operation";
	cin >> c;
	if (c == '+')
		S = a + b;
	
	if (c == '-')
		S = a - b;
	
	if (c == '*')
		S = a * b;
	
	if (c == '/')
		S = a / b;

	cout << S;
	return 0;
}
