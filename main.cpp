#include <iostream>
#include <vector>
using namespace std;

void sortByInsert(vector <int> &arr) {
    for (int i = 1; i < arr.size(); i++) {  
        for (int k = i; k > 0; k--) {
            if ((arr[k]) < (arr[k - 1])) {
                swap(arr[k], arr[k - 1]);
            }
            else {
                break;
            }
        }  
    }
}


int main() {

	return 0;
}