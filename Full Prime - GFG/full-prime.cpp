//{ Driver Code Starts
//Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    int i = 5;
    while (i * i <= num) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
        i += 6;
    }
    return true;
}
bool all_digits_prime(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (!is_prime(digit)) {
            return false;
        }
        num /= 10;
    }
    return true;
}
	int fullPrime(int N){
	    //code here
	     if (is_prime(N) && all_digits_prime(N)) {
        return 1;
    }
    return 0;
	}
};


//{ Driver Code Starts.
int main()
{
	int t;
    cin>>t;
    while(t--){
	   int N;
	   cin>>N;
       Solution ob;
       cout << ob.fullPrime(N)<<"\n";
    }
}
// } Driver Code Ends