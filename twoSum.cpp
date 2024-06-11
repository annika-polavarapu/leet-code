#include <iostream>

using namespace std;

int main() {

    int twoSum(int nums[], int target) {
        for (int i = 0; i < sizeof(nums) - 1; i++ ) {
            for (int j = i + 1; j < sizeof(nums); j++) {
                if (nums[i] + nums[j] == target) {
                    cout << {i, j} << endl;
                }
            }
        }
        return 0;
    }
}