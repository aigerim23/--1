#include <iostream>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int branchType;
	bool buildPassed, testsPassed, reviewApproved, hasConflicts;
	cin >> branchType >> buildPassed >> testsPassed >> reviewApproved >> hasConflicts;
	switch (branchType) {
	case 1:
		cout << "Branch: feature" << endl;
		if (buildPassed && testsPassed && reviewApproved && !hasConflicts) {
			cout << "Pull Request accepted";
		}
		else {
			cout << "Pull Request rejected" << endl;
			if (!buildPassed) {
				cout << "Reason: build failed";
			}
			else if (!testsPassed) {
				cout << "Reason: tests failed";
			}
			else if (!reviewApproved) {
				cout << "Reason: review not approved";
			}
			else {
				cout << "Reason: conflicts detected";
			}
		}
		break;
	case 2:
		cout << "Branch: bugfix" << endl;
		if (buildPassed && testsPassed && !hasConflicts) {
			cout << "Pull Request accepted";
		}
		else {
			cout << "Pull Request rejected" << endl;
			if (!buildPassed) {
				cout << "Reason: build failed";
			}
			else if (!testsPassed) {
				cout << "Reason: tests failed";
			}
			else {
				cout << "Reason: conflicts detected";
			}
		}
		break;
	case 3:
		cout << "Branch: hotfix" << endl;
		if (buildPassed && reviewApproved && !hasConflicts) {
			cout << "Pull Request accepted";
		}
		else {
			cout << "Pull Request rejected" << endl;
			if (!buildPassed) {
				cout << "Reason: build failed";
			}
			else if (!reviewApproved) {
				cout << "Reason: review not approved";
			}
			else {
				cout << "Reason: conflicts detected";
			}
		}
		break;
	default: cout << "Unknown branch type";
		break;
	}
}