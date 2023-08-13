//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string removeChars(string string1, string string2) {
        // code here
         std::unordered_set<char> charsToRemove;

    // Add characters from string2 to the hash set
    for (char c : string2) {
        charsToRemove.insert(c);
    }

    std::string result;

    // Iterate through string1 and add characters not present in charsToRemove
    for (char c : string1) {
        if (charsToRemove.find(c) == charsToRemove.end()) {
            result += c;
        }
    }

    return result;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}

// } Driver Code Ends