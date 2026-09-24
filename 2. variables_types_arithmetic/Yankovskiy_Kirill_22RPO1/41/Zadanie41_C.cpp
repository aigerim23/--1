#include <iostream>
using namespace std;

int main()
{
	int anton, boris, victor;
	cout << "Введите три возраста\n";
	cin >> anton >> boris >> victor;
    if (anton > boris && anton > victor) cout << "anton";
    else if (boris > anton && boris > victor) cout << "boris";
    else if (victor > anton && victor > boris) cout << "victor\n";
    else if (anton == boris && anton > victor) cout << "anton, boris";
    else if (anton == victor && anton > boris) cout << "anton, victor";
    else if (boris == victor && boris > anton) cout << "boris, victor";
    else if (anton == boris && anton == victor) cout << "Ravni";

}