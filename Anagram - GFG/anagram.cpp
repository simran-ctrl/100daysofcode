//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        if (a.length() != b.length()) {
        return false; // Anagrams must have the same length
    }

    unordered_map<char, int> freq; // To store character frequencies

    // Count the frequency of characters in string 'a'
    for (char c : a) {
        freq[c]++;
    }

    // Subtract the frequency of characters in string 'b'
    for (char c : b) {
        if (freq.find(c) == freq.end() || freq[c] == 0) {
            return false; // Character not present in 'a' or frequency exhausted
        }
        freq[c]--;
    }

    return true;
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends