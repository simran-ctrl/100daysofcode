//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int firstIndex(int a[], int n) 
    {
         int left = 0;
    int right = n - 1;
    int result = -1;  // Initialize result with -1 in case there are no 1s

    while (left <= right) {
        int mid = left + (right - left) / 2;  // Calculate middle index

        if (a[mid] == 1) {
            result = mid;  // Update result and continue searching on the left half
            right = mid - 1;
        } else {
            left = mid + 1;  // Search on the right half
        }
    }

    return result;
        
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.firstIndex(a, n) << endl;
    }
}
// } Driver Code Ends