//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
        stack<int> numStack;
    stack<string> strStack;
    string currentStr = "";
    int num = 0;

    for (char c : s) {
        if (isdigit(c)) {
            num = num * 10 + (c - '0');
        } else if (isalpha(c)) {
            currentStr += c;
        } else if (c == '[') {
            numStack.push(num);
            strStack.push(currentStr);
            num = 0;
            currentStr = "";
        } else if (c == ']') {
            int repeatTimes = numStack.top();
            numStack.pop();
            string prevStr = strStack.top();
            strStack.pop();
            for (int i = 0; i < repeatTimes; ++i) {
                prevStr += currentStr;
            }
            currentStr = prevStr;
        }
    }

    return currentStr;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends