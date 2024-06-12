using namespace std;
#include <vector>;

void sortColors(vector<int>& nums) {
        int zeros = 0;
        int ones = 0;
        int twos = 0;

        for (int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                zeros++;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                ones++;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                twos++;
            }
        }

        nums.clear();

        for(int i = 0; i < zeros; i++) {
            nums.push_back(0);
        }
        for(int i = 0; i < ones; i++) {
            nums.push_back(1);
        }
        for(int i = 0; i < twos; i++) {
            nums.push_back(2);
        }
}

/* Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

 

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2] 

Constraints:

n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2. */