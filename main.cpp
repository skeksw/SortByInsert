#include "menu.h"
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

// Функция сортировки методом вставки
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

// Функция сохранения векторов (исходного и отсортированного) в файл
void saveInFile(vector <int> &vecBefore, vector <int> &vecAfter) { 
    fstream file("result.txt", fstream::out);
    file << "Array before sorting:" << endl;
    for (int i = 0; i < vecBefore.size(); i++) {
        file << vecBefore[i] << '\t';
    }
    file << endl << "Array after sorting:" << endl;
    for (int i = 0; i < vecAfter.size(); i++) {
        file << vecAfter[i] << '\t';
    }
}

// Функция приравнивания одного вектора к другому
vector <int> equalingVectors(vector <int>& vecBefore, vector <int>& vecAfter) { 
    for (int i = 0; i < vecBefore.size(); i++) {
        vecAfter.push_back(vecBefore[i]);
    }
    return vecAfter;
}

// Функция вывода вектора на экран
void printVector(vector <int>& vec) { 
	for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << '\t';
	}
    cout << endl;
}

// Функция случайного заполнения вектора
vector <int> randomVectorFill(vector<int> &vec) { 
    for (int i = 0; i < rand() % 15; i++) {
        vec.push_back(rand() % 100 - 50);
        
    }
    return vec;
}

// Функция ручного заполнения вектора
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
    vector <int> vecBefore;
    vector <int> vecAfter;
    while (choice != menuEnum::exitEnum) {
        switch (choice)
        {
        case randomFill:
            randomVectorFill(vecBefore);
            cout << "Not sorted array:" << endl;
            printVector(vecBefore);
            cout << "Sorted array (insert):" << endl;
            equalingVectors(vecBefore, vecAfter);
            sortByInsert(vecAfter);
            printVector(vecAfter);
            if (menuYesOrNo()) {
                saveInFile(vecBefore, vecAfter);
                cout << "Data saved" << endl;
            }
            vecAfter.clear();
            vecBefore.clear();
            break;
        case manual:
            manualVectorFill(vecBefore);
            cout << "Sorted array (insert):" << endl;
            equalingVectors(vecBefore, vecAfter);
            sortByInsert(vecAfter);
            printVector(vecAfter);
            if (menuYesOrNo()) {
                saveInFile(vecBefore, vecAfter);
                cout << "Data saved" << endl;
            }
            vecAfter.clear();
            vecBefore.clear();
            break;
        default:
            cout << "Press from 1 to 3" << endl;
        }
        choice = menu();
    }
	return 0;
}