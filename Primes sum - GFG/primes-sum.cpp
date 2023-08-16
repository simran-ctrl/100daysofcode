//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
void sieveOfEratosthenes(vector<bool> &isPrime, int limit) {
    isPrime.assign(limit + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= limit; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }
}
    string isSumOfTwo(int N){
        // code here
        const int limit = N; // Set a limit for prime number generation
    vector<bool> isPrime;
    sieveOfEratosthenes(isPrime, limit);

    for (int i = 2; i <= N / 2; ++i) {
        if (isPrime[i] && isPrime[N - i]) {
            return "Yes"; // Found a pair of prime numbers whose sum is N
        }
    }
    return "No";
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
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends