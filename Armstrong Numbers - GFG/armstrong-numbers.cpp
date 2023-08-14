//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
         if (n < 100 || n > 999) {
        return "No"; // Numbers not in the range [100, 999] are not considered
    }

    int originalNumber = n;
    int sumOfCubes = 0;

    while (n > 0) {
        int digit = n % 10;
        sumOfCubes += std::pow(digit, 3);
        n /= 10;
    }

    if (sumOfCubes == originalNumber) {
        return "Yes"; // It's an Armstrong number
    } else {
        return "No";  // It's not an Armstrong number
    }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends