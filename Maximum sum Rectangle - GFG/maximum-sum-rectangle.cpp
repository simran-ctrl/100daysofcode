//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int maximumSumSubarray(int arr[], int n) {
    int maxEndingHere = 0;
    int maxSoFar = INT_MIN;

    for (int i = 0; i < n; i++) {
        maxEndingHere = max(maxEndingHere + arr[i], arr[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    return maxSoFar;
}
    int maximumSumRectangle(int R, int C, vector<vector<int>> M) {
        // code here
         int maxSum = INT_MIN;

    for (int left = 0; left < C; left++) {
        int temp[R] = {0}; // Temporary array to store the column-wise sum

        for (int right = left; right < C; right++) {
            for (int i = 0; i < R; i++) {
                temp[i] += M[i][right];
            }

            int maxSumSub = maximumSumSubarray(temp, R);
            maxSum = max(maxSum, maxSumSub);
        }
    }

    return maxSum;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        Solution ob;
        cout << ob.maximumSumRectangle(N, M, v) << "\n";
    }
}
// } Driver Code Ends