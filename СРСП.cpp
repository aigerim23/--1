#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int branchType;
	bool buildPassed;
	bool testsPassed;
	bool reviewApproved;
	bool hasConflicts;
	cout << "Введите тип ветки (1 - feature, 2 - bugfix, 3 - hotfix): ";
	cin >> branchType;
	cout << "Введите результат сборки (1 - успешно, 0 - неудачно): ";
	cin >> buildPassed;
	cout << "Введите результат тестов (1-пройдены, 0 - не пройдены): ";
	cin >> testsPassed;
	cout << "Введите результат ревью (1 - одобрено, 0 - не одобрено): ";
	cin >> reviewApproved;
	cout << "Введите наличие конфликтов (1 - есть, 0 - нет): ";
	cin >> hasConflicts;
	switch (branchType) {
	case 1:
		cout << "Branch: feature\n ";
		if (hasConflicts) {

			cout << "Pull Request rejected\n" << "conflicts detected";
		}
		else if (!buildPassed) {
			cout << "Pull Request rejected\n" << "build failed";
		}
		else if (!testsPassed) {
			cout << "Pull Request rejected\n" << "tests failed";
		}
		else if (!reviewApproved) {
			cout << "Pull Request rejected\n" << "review not approved";
		}
		else {
			cout << "Pull Request accepted";
		}
		break;
	case 2:
		cout << "Branch: bugfix\n ";
		if (hasConflicts) {
			cout << "Pull Request rejected\n" << "conflicts detected";
		}
		else if (!buildPassed) {
			cout << "Pull Request rejected\n" << "build failed";
		}
		else if (!testsPassed) {
			cout << "Pull Request rejected\n" << "tests failed";
		}
		
		else {
			cout << "Pull Request accepted";
		}
		break;
	case 3:
		cout << "Branch: hotfix\n ";
		if (hasConflicts) {
			cout << "Pull Request rejected\n" << "conflicts detected";
		}
		else if (!buildPassed) {
			cout << "Pull Request rejected\n" << "build failed";
		}
		
		else if (!reviewApproved) {
			cout << "Pull Request rejected\n" << "review not approved";
		}

		else {
			cout << "Pull Request accepted";
		}
		break;

	}
}