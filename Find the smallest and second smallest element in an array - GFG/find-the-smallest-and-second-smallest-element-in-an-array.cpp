//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
     int smallest = INT_MAX;          // Initialize with a large value
    int secondSmallest = INT_MAX;    // Initialize with a large value

    for (int i = 0; i < n; i++) {
        if (a[i] < smallest) {
            secondSmallest = smallest;   // Update the second smallest
            smallest = a[i];             // Update the smallest
        } else if (a[i] < secondSmallest && a[i] != smallest) {
            secondSmallest = a[i];       // Update the second smallest
        }
    }

    vector<int> result;
    if (secondSmallest == INT_MAX) {
        // If second smallest doesn't exist
        result.push_back(-1);
    } else {
        result.push_back(smallest);
        result.push_back(secondSmallest);
    }

    return result;

}
  
