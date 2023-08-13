//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
         if (S.empty()) {
        return ""; // Return empty string if input string is empty
    }

    std::string result;
    result += S[0]; // Add the first character to the result

    // Traverse the string starting from the second character
    for (int i = 1; i < S.length(); i++) {
        // If the current character is different from the previous character, add it to the result
        if (S[i] != S[i - 1]) {
            result += S[i];
        }
    }

    return result;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends