#include <bits/stdc++.h>

using namespace std;

int secondLargestElement (vector<int> &arr) {
    int n = arr.size();
    if (n < 2) return -1;
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
        
    }
    if (secondLargest == INT_MIN) return -1; //edgge case for duplicate elements like {10, 10 , 10}
        //otheerwise
    return secondLargest;
}

int main () {
    vector<int> arr = {12, 35, 1, 8, 36, 34};
    int secondLargest = secondLargestElement(arr);
    cout << secondLargest << endl;
}
