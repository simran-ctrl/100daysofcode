//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std; 

// } Driver Code Ends

class Solution{
    public:
    bool isSubSequence(string A, string B) 
    {
        // code here
         int indexA = 0; // Pointer for string A

    for (char c : B) {
        if (A[indexA] == c) {
            indexA++; // Move the pointer for string A
        }

        // If all characters in A have been found in B
        if (indexA == A.length()) {
            return true;
        }
    }

    // If pointer for string A did not reach the end
    return false;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;  
        Solution ob;
        if(ob.isSubSequence(A,B))
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0; 
} 

// } Driver Code Ends