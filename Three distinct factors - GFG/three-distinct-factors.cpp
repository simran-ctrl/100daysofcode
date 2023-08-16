//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
bool is_prime(long long num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    long long i = 5;
    while (i * i <= num) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
        i += 6;
    }
    return true;
}
    int hasThreePrimeFac(long long N) {
        // code here
            long long sqrt_N = sqrt(N);
    
    // Check if N is a perfect square and its square root is prime
    if (sqrt_N * sqrt_N == N && is_prime(sqrt_N)) {
        return true;
    }
    return false;

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.hasThreePrimeFac(N) << endl;
    }
    return 0;
}
// } Driver Code Ends