//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string s1, string s2)
    {
       int s1_len = s1.length();
  int s2_len = s2.length();

  vector<vector<int>> dp(s1_len + 1, vector<int>(s2_len + 1));

  for (int row = 0; row <= s1_len; row++) {
    for (int col = 0; col <= s2_len; col++) {
      if (row == 0 || col == 0) {
        dp[row][col] = 0;
      } else if (s1[row - 1] == s2[col - 1]) {
        dp[row][col] = dp[row - 1][col - 1] + 1;
      } else {
        dp[row][col] = max(dp[row - 1][col], dp[row][col - 1]);
      }
    }
  }

  return dp[s1_len][s2_len];
        
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends