//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
         stack<char> s;

    // Loop through each character in the expression
    for (char c : x) {
        // If the character is an opening bracket, push it onto the stack
        if (c == '(' || c == '{' || c == '[') {
            s.push(c);
        }
        // If the character is a closing bracket
        else if (c == ')' || c == '}' || c == ']') {
            // If the stack is empty or the top element doesn't match the current closing bracket
            if (s.empty() ||
                (c == ')' && s.top() != '(') ||
                (c == '}' && s.top() != '{') ||
                (c == ']' && s.top() != '[')) {
                return false;
            }
            s.pop(); // Pop the corresponding opening bracket from the stack
        }
    }

    // At the end, the stack should be empty if the expression is properly balanced
    return s.empty();
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends