#include "menu.h"
#include <iostream>
#include <vector>

using namespace std;

vector <int> sortByInsert(vector <int> &vec) {
    for (int i = 1; i < vec.size(); i++) {  
        for (int k = i; k > 0; k--) {
            if ((vec[k]) < (vec[k - 1])) {
                swap(vec[k], vec[k - 1]);
            }
            else {
                break;
            }
        }  
    }
    return vec;
}


void printVector(vector <int>& vec) {
	for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << '\t';
	}
    cout << endl;
}

vector <int> randomVectorFill(vector<int> &vec) {
    for (int i = 0; i < rand() % 15; i++) {
        vec.push_back(rand() % 100 - 50);
        
    }
    return vec;
}
vector <int> manualVectorFill(vector<int>& vec) {
    cout << "Enter the number of size array:" << endl;
    int sizeOfArray = checkData();
    int number = 0;
    cout << "Enter the array:" << endl;
    for (int i = 0; i < sizeOfArray; i++) {
        cout << i + 1 << ": " << endl;
        cin >> number;
        vec.push_back(number);
    }
    return vec;
}

int main() {
    menuEnum choice = menu();
    vector <int> vec;
    while (choice != menuEnum::exitEnum) {
        switch (choice)
        {
        case randomFill:
            randomVectorFill(vec);
            cout << "Not sorted array:" << endl;
            printVector(vec);
            cout << "Sorted array (insert):" << endl;
            sortByInsert(vec);
            printVector(vec);
            vec.clear();
            break;
        case manual:
            manualVectorFill(vec);  
            cout << "Sorted array (insert):" << endl;
            sortByInsert(vec);
            printVector(vec);
            vec.clear();
            break;
        default:
            cout << "Press from 1 to 3" << endl;
        }
        choice = menu();
    }
	return 0;
}