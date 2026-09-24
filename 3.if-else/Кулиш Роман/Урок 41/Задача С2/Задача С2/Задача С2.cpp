#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
    int age;
	cout << "Введите ваш возраст: " << endl;
	cin >> age;

	if (age % 100 >= 11 && age % 100 <= 14)
		{
			cout << "Вам " << age << " лет" << endl;
		}

	else if (121 <= age || age <= -1)
		{
			cout << "Вы ввели некорректный возраст" << endl;
		}

	else if (age % 10 == 1)
		{
			cout << "Вам " << age << " год" << endl;
		}

	else if (age % 10 >= 2 && age % 10 <= 4)
		{
			cout << "Вам " << age << " года" << endl;
		}

	else if (age % 10 >= 5 && age % 10 <= 9 || age % 10 == 0)
		{
			cout << "Вам " << age << " лет" << endl;
		}
}