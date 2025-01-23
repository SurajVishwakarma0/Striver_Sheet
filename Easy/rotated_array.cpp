#include <bits/stdc++.h>
using namespace std;

void rotatedArray(vector<int> &nums , int k) {
    vector<int> temp(nums.size()); //made a temporary variable to store the rotated array

    for (int i = 0; i < nums.size(); i++) {
        temp[(i + k) % nums.size()] = nums[i];
    }
    //copy temp into nums vector
    nums = temp;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int k = 2;
    rotatedArray(nums, k);
    for (int num: nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;

}