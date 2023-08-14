//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}
    int isPerfect(int N) {
        // code here
         int originalNumber = N;
    int sumOfFactorials = 0;

    while (N > 0) {
        int digit = N % 10;
        sumOfFactorials += factorial(digit);
        N /= 10;
    }

    if (sumOfFactorials == originalNumber) {
        return 1; // It's a perfect number
    } else {
        return 0; // It's not a perfect number
    }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isPerfect(N) << "\n";
    }
}

// } Driver Code Ends