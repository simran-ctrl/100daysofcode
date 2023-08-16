//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

string reverseEqn(string s) {
    stack<string> numStack;
    string currentNum = "";

    for (char c : s) {
        if (isdigit(c)) {
            currentNum += c;
        } else if (isOperator(c)) {
            if (!currentNum.empty()) {
                numStack.push(currentNum);
                currentNum = "";
            }
            numStack.push(string(1, c)); // Push the operator as a string
        }
    }

    // Push the last number if any
    if (!currentNum.empty()) {
        numStack.push(currentNum);
    }

    string reversedEqn = "";
    
    while (!numStack.empty()) {
        reversedEqn += numStack.top();
        numStack.pop();
    }

    return reversedEqn;
}
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends