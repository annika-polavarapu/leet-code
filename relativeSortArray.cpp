using namespace std;
#include <vector>

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    int arrayPos = 0;
    for (int i = 0; i < arr2.size(); i++) {
        for (int j = 0; j < arr1.size(); j++) {
            if(arr1[j] == arr2[i]) {
                swap(arr1[arrayPos], arr1[j]);
                arrayPos++;
            }
        }
    }
    sort(arr1.begin() + arrayPos, arr1.end());
    return arr1;
}