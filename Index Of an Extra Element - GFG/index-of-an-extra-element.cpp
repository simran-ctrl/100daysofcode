//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
        // add code here.
        int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculate mid index

        if (mid == n - 1) {
            // If mid is the last index, the extra element is at the end
            return mid;
        }

        if (a[mid] == b[mid]) {
            // If elements are equal, move to the right half
            left = mid + 1;
        } else {
            // If elements are not equal, move to the left half
            right = mid - 1;
        }
    }

    return left;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        Solution obj;
        cout << obj.findExtra(a, b, n) << endl;
    }
}
// } Driver Code Ends