//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
         int candidate = 0; // Initial candidate for celebrity
    
    // Find a potential celebrity candidate
    for (int i = 1; i < n; ++i) {
        if (M[candidate][i] == 1) {
            candidate = i;
        }
    }
    
    // Verify if the candidate is a celebrity
    for (int i = 0; i < n; ++i) {
        if (i != candidate && (M[candidate][i] == 1 || M[i][candidate] == 0)) {
            return -1; // No celebrity found
        }
    }
    
    return candidate; 
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
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends