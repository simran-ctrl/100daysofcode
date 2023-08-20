//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
     int n = s.size();
    
    if (n % 2 != 0) {
        // If the string length is odd, it can never be balanced
        return -1;
    }
    
    stack<char> st;
    
    for (char c : s) {
        if (c == '}' && !st.empty() && st.top() == '{') {
            st.pop();
        } else {
            st.push(c);
        }
    }
    
    int unbalancedCount = st.size();
    
    // Count the number of opening and closing brackets that need to be reversed
    int openCount = 0, closeCount = 0;
    while (!st.empty()) {
        if (st.top() == '{') {
            openCount++;
        } else {
            closeCount++;
        }
        st.pop();
    }
    
    // Return the number of reversals required
    return (openCount + 1) / 2 + (closeCount + 1) / 2;
}