//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
      int sLen = s.length();
    int xLen = x.length();

    for (int i = 0; i <= sLen - xLen; i++) {
        int j = 0;

        // Check if substring x matches starting from index i
        while (j < xLen && s[i + j] == x[j]) {
            j++;
        }

        // If the loop above completed (j == xLen), we found a match
        if (j == xLen) {
            return i; // Return the index of the first character of the match
        }
    }

    return -1;
}