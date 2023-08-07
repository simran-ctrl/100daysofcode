//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
        long long find_multiplication(int a[], int b[], int n, int m)
    {
        // Complete the function
        int maxA = INT_MIN;  // Initialize maxA with smallest possible value
    int minB = INT_MAX;  // Initialize minB with largest possible value

    // Find maximum element from the first array
    for (int i = 0; i < n; i++) {
        if (a[i] > maxA) {
            maxA = a[i];
        }
    }

    // Find minimum element from the second array
    for (int i = 0; i < m; i++) {
        if (b[i] < minB) {
            minB = b[i];
        }
    }

    // Calculate and return the product
    return (long long)maxA * minB;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)    cin>>a[i];
        
        int m;
        cin>>m;
        int b[m];
        for(int i=0;i<m;i++)    cin>>b[i];
        
        
        Solution ob;
        cout<<ob.find_multiplication(a, b, n, m)<<endl;

    }
    return 0;
}
// } Driver Code Ends