//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int Maximize(int a[],int n)
    {
        int MOD = 1000000007;
        sort(a, a + n);
        long long result = 0;
         for (int i = 0; i < n; ++i) {
        result = (result + (static_cast<long long>(a[i]) * i)) % MOD;
    }
       return static_cast<int>(result);
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends