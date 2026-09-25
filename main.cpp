#include <iostream>

using namespace std;

int main() {
    int choice;
    cout << "=== ALL TASKS MENU (1-6) ===" << endl;
    cout << "1. Three integers comparison" << endl;
    cout << "2. Five integers comparison" << endl;
    cout << "3. Anton, Boris and Viktor ages" << endl;
    cout << "4. Compare three numbers (equal check)" << endl;
    cout << "5. Season by month number" << endl;
    cout << "6. Age formatting" << endl;
    cout << "Enter task number (1-6): ";
    cin >> choice;

    switch (choice) {
    case 1: {
        // Задача 1: Про три целых числа
        int x, y, z;
        cout << "Enter three integers: ";
        cin >> x >> y >> z;
        int max_val = x;
        if (y > max_val) max_val = y;
        if (z > max_val) max_val = z;
        cout << "Maximum number is: " << max_val << endl;
        break;
    }
    case 2: {
        // Задача 2: Про пять целых чисел
        int n1, n2, n3, n4, n5;
        cout << "Enter five integers: ";
        cin >> n1 >> n2 >> n3 >> n4 >> n5;
        int max_val = n1;
        if (n2 > max_val) max_val = n2;
        if (n3 > max_val) max_val = n3;
        if (n4 > max_val) max_val = n4;
        if (n5 > max_val) max_val = n5;
        cout << "Maximum number is: " << max_val << endl;
        break;
    }
    case 3: {
        // Задача 3: Возраст Антона, Бориса и Виктора
        int anton, boris, viktor;
        cout << "Enter Anton's age: ";
        cin >> anton;
        cout << "Enter Boris's age: ";
        cin >> boris;
        cout << "Enter Viktor's age: ";
        cin >> viktor;

        int oldest = anton;
        if (boris > oldest) oldest = boris;
        if (viktor > oldest) oldest = viktor;

        int youngest = anton;
        if (boris < youngest) youngest = boris;
        if (viktor < youngest) youngest = viktor;

        cout << "Oldest age: " << oldest << endl;
        cout << "Youngest age: " << youngest << endl;
        break;
    }
    case 4: {
        // Задача 4: Про одинаковые числа
        int a, b, c;
        cout << "Enter three numbers: ";
        cin >> a >> b >> c;
        if (a == b && b == c) {
            cout << "All numbers are equal." << endl;
        }
        else if (a == b || a == c || b == c) {
            cout << "Two numbers are equal." << endl;
        }
        else {
            cout << "No numbers are equal." << endl;
        }
        break;
    }
    case 5: {
        // Задача 5: Про время года
        int month;
        cout << "Enter month number (1-12): ";
        cin >> month;
        switch (month) {
        case 12: case 1: case 2:
            cout << "Winter." << endl; break;
        case 3: case 4: case 5:
            cout << "Spring." << endl; break;
        case 6: case 7: case 8:
            cout << "Summer." << endl; break;
        case 9: case 10: case 11:
            cout << "Autumn." << endl; break;
        default:
            cout << "Invalid month number." << endl; break;
        }
        break;
    }
    case 6: {
        // Задача 6: Про возраст
        int age;
        cout << "Enter age: ";
        cin >> age;
        cout << "You are " << age << " years old." << endl;
        break;
    }
    default:
        cout << "Invalid choice!" << endl;
        break;
    }

    return 0;
}