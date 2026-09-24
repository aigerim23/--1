#include <iostream>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	bool isAuthorized, hasSubscription, isTrial, accountBlocked;
	cin >> isAuthorized >> hasSubscription >> isTrial >> accountBlocked;
	if (isAuthorized && !accountBlocked && (hasSubscription || isTrial)) {
		cout << "доступ разрешён";
	}
	else {
		cout << "доступ запрещён";
	}
}

