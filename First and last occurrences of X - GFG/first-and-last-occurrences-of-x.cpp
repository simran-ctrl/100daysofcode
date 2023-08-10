//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int X) {
        // Code here
          int firstOccurrence = -1, lastOccurrence = -1;

    // Finding the first occurrence using binary search
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == X) {
            firstOccurrence = mid;
            high = mid - 1; // Continue searching on the left side
        } else if (arr[mid] < X) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // If the element was not found in the array
    if (firstOccurrence == -1) {
        return {-1};
    }

    // Finding the last occurrence using binary search
    low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == X) {
            lastOccurrence = mid;
            low = mid + 1; // Continue searching on the right side
        } else if (arr[mid] < X) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return {firstOccurrence, lastOccurrence};

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends