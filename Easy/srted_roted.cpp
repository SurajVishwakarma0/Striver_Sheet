#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums) {
    int n= nums.size();

    int cnt = 0;

    //check if the array is in non-decreasing prder
    for (int i = 1; i < n; i++) {
        if (nums[i -1] > nums[i]) {
            cnt ++;
        }
    }

    //checkif the last element is greater than the first element
    if (nums[n - 1] > nums[0]) {
        cnt ++;
    }

    //if count of violation is less than or equal to 1, return true
    return cnt <= 1;
}

int main() {
    vector<int> nums = {5, 6, 1, 2, 3, 4};

    //cout <<check(nums) << endl;//abhi directly print karne par output : 1 or 0 aarha hai
        
    cout << boolalpha << check(nums) << endl; // isse true or false output aayega
}