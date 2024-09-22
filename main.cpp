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
}

vector <int> randomVectorFill(vector<int> &vec) {
    for (int i = 0; i < vec.size(); i++) {
        vec[i] = rand() % 100 - 50;
    }
    return vec;
}

int main() {

	return 0;
}