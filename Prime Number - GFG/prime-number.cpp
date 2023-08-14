//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isPrime(int N){
        // code here
        if (N < 2) {
        return false; // Numbers less than 2 are not prime
    }

    int sqrtN = std::sqrt(N); // Calculate the square root of N

    for (int i = 2; i <= sqrtN; ++i) {
        if (N % i == 0) {
            return false; // N is divisible by i, so it's not prime
        }
    }

    return true;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends