//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
       int count=0;
       int i=0;
       int j=0;
       long long  product;
       for(int i=0;i<n;i++){
           if(a[i]<k){
               count++;
           }
           product=a[i];
           for(int j=i+1;j<n;j++){
               product=product*a[j];
               if(product<k){
                   count++;
               }
               else{
                   break;
               }
           }
       }
       return count;
       
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends