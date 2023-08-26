//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
     int n = s.length();
    if (n == 0 || k <= 0) {
        return -1; // Invalid input
    }

    unordered_map<char, int> charFrequency;
    int left = 0, maxLength = -1, uniqueCount = 0;

    for (int right = 0; right < n; ++right) {
        charFrequency[s[right]]++;

        if (charFrequency[s[right]] == 1) {
            uniqueCount++;
        }

        while (uniqueCount > k) {
            charFrequency[s[left]]--;

            if (charFrequency[s[left]] == 0) {
                uniqueCount--;
            }

            left++;
        }

        if (uniqueCount == k) {
            maxLength = max(maxLength, right - left + 1);
        }
    }

    return maxLength;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends