// #include <bits/stdc++.h>

// using namespace std;

// int findLargestElement(vector<int> &arr) {
//     int n = arr.size();
//     int max = INT_MIN;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }
//     return max;
// }

// int main() {
//     vector<int> arr = {2, 5, 8, 2, 10};
    
//     int max = findLargestElement(arr);
//     cout << max << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int findLargestElement (vector<int> &arr) {
//     int n = arr.size();
//     int max = INT_MIN;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }
//     return max;
// }

// int main() {
//     vector<int> arr = {2, 1, 7, 6, 8, 5};
//     int max = findLargestElement(arr);
//     cout << max << endl;
//     return 0;
// }
// OOP concept code
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int largestElement(vector<int> &arr) {
        int n = arr.size();
        int max = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        return max;

    }
};

int main() {
    vector<int> arr = {4, 8, 3, 2, 5};
    Solution obj;
    int max = obj.largestElement(arr);
    cout << max << endl;
    return 0;
}
