//Brute-Force Approach

// #include <bits/stdc++.h>
// using namespace std;

// int removeDuplicates(vector<int> &nums) {
//     int n = nums.size();
//     vector<int>temp(n);
//     int j=0;

//     for (int i = 0; i < n - 1; i++) {
//         if (nums[i] != nums[i + 1]) {
//             temp[j] = nums[i];
//             j++;
//         }
//     }
//     temp[j] = nums[n-1];
//     j++;

//     //copy element from 'temp' back to the 'nums'
//     for (int i = 0; i<j; i++) {
//         nums[i] = temp[i];
//     }
//     return j;
// }

// int main() {
//     vector<int> nums= {1, 1, 2, 2, 3, 3, 4, 4, 5};
//     int k = removeDuplicates(nums);
    
//     // Print the result
//     cout << "Number of unique elements: " << k << endl;
//     cout << "Modified array: ";
//     for (int i = 0; i < k; i++) {
//         cout << nums[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//Two-Pointer Approach:

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums) {
    int n = nums.size();
    
    // Pointers to track unique elements
    int i = 0, j = 1;

    while (j < n) {
        // If a unique element is found
        if (nums[i] != nums[j]) {
            i++; // Move pointer i to next position
            nums[i] = nums[j]; // Place the unique element in the correct position
        }
        j++; // Move pointer j to check the next element
    }

    // Return the number of unique elements
    return i + 1;
}

int main() {
    // Input array
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 4, 5};
    
    // Remove duplicates and get the count of unique elements
    int k = removeDuplicates(nums);
    
    // Print the result
    cout << "Number of unique elements: " << k << endl;
    cout << "Modified array: ";
    
    // Print unique elements (first k elements)
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
