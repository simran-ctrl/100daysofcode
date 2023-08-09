//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;// Exactly 3 divisors
}
    vector<int> threeDivisors(vector<long long> query, int q)
    {
        // Write your code here
       vector<int> result;

    for (int i = 0; i < q; i++) {
        long long N = query[i];
        int count = 0;

        for (int num = 1; num <= sqrt(N); num++) {
            if (isPrime(num) && num * num <= N) {
                count++;
            }
        }

        result.push_back(count);
    }

    return result;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}
// } Driver Code Ends