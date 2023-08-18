//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
        // code here
        int left = 0;
    int right = arr.size() - 1;
    int closestSum = INT_MAX;
    int pair1, pair2;

    while (left < right) {
        int sum = arr[left] + arr[right];
        int diff = abs(x - sum);

        if (diff < closestSum) {
            closestSum = diff;
            pair1 = arr[left];
            pair2 = arr[right];
        }

        if (sum < x) {
            left++;
        } else {
            right--;
        }
    }

    return {pair1, pair2};
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
        Solution ob;
        auto ans = ob.sumClosest(arr, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends