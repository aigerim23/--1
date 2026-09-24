//4.133
#include <iostream>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int mon, td, yd, nd;
	cout << "Введите дату ";
	cin >> mon >> td;
	int pm = mon;
	int nm = mon;
	yd = td - 1;
	if (yd == 0) {
		pm = pm - 1;
		switch (pm) {
		case 1: yd = 31;
			break;
		case 2: yd = 28;
			break;
		case 3: yd = 31;
			break;
		case 4: yd = 30;
			break;
		case 5: yd = 31;
			break;
		case 6: yd = 30;
			break;
		case 7: yd = 31;
			break;
		case 8: yd = 31;
			break;
		case 9: yd = 30;
			break;
		case 10: yd = 31;
			break;
		case 11: yd = 30;
			break;
		case 12: yd = 31; 
			break;
		}
	}
	nd = td + 1;
	if (nd == 32 || (nd == 31 && (mon == 4 || mon == 6 || mon == 9 || mon == 11)) || (nd == 29 && mon == 2)) {
		nm = nm + 1;
		nd = 1;
	}
	cout << "Прошлый день: " << pm << " " << yd << endl;
	cout << "Следующий день: " << nm << " " << nd << endl;
}