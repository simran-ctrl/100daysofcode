//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  int solveTab(string a, string b){
      vector<int> curr(b.length()+1, 0);
       vector<int> next(b.length()+1, 0);
       for(int i=a.length()-1;i>=0;i--){
           for(int j=b.length()-1;j>=0;j--){
               int ans=0;
               if(a[i]==b[j]){
                   ans=1+next[j+1];
               }
               else{
                   ans=max(next[j],curr[j+1]);
               }
               curr[j]=ans;
           }
           next=curr;
       }
       return next[0];
      
  }
    int longestPalinSubseq(string s) {
        //code here
        string revStr=s;
        reverse(revStr.begin(), revStr.end());
        int ans= solveTab(s, revStr);
        return ans;
       
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends