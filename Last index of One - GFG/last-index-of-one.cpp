//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lastIndex(string s) 
    {
        int n=s.length();
        for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '1') {
            return i;
        }
    }
    // Return -1 if '1' is not present in the string
    return -1;
    }
   
};

//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.lastIndex(s) << endl;
    }
    return 0;
}
// } Driver Code Ends