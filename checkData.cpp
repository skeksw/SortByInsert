#include <iostream>

using namespace std;

int checkData() {
	int forCheck;
	cin >> forCheck;
	while (cin.fail()) {
		while (getchar() != '\n');
		cout << "Данные введены некорректно, введите целочисленное значение" << endl;
		cin.clear();
		cin >> forCheck;
	}
	return forCheck;
}