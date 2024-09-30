#include <iostream>

using namespace std;

int checkData() {
	int forCheck;
	cin >> forCheck;
	while (cin.fail()) {
		while (getchar() != '\n');
		cout << "Incorrect data, enter integer value" << endl;
		cin.clear();
		cin >> forCheck;
	}
	return forCheck;
}