#include <iostream>

using namespace std;

int CheckData() {
	int forCheck;
	cin >> forCheck;
	while (cin.fail()) {
		while (getchar() != '\n');
		cout << "������ ������� �����������, ������� ������������� ��������" << endl;
		cin.clear();
		cin >> forCheck;
	}
	return forCheck;
}