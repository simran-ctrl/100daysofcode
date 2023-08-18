//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        unordered_map<int, int> indexMap;

    int minIndex = n; // Initialize with a value larger than n

    for (int i = 0; i < n; i++) {
        if (indexMap.find(arr[i]) != indexMap.end()) {
            minIndex = min(minIndex, indexMap[arr[i]]);
        } else {
            indexMap[arr[i]] = i;
        }
    }

    if (minIndex == n) {
        return -1; // No repeating element found
    } else {
        return minIndex + 1; // Return the 1-based index
    }
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}

// } Driver Code Ends