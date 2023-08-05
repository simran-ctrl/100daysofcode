//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        unordered_map<int, int> freqMap;
       
        for (int i = 0; i < n; i++) {
        freqMap[a[i]]++;
       
       
        if (freqMap[a[i]] == k) {
            return a[i];
        }
    }

    // If no element occurs exactly k times, return -1 or any other appropriate value
    return -1;
}
    
};

//{ Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout<<ob.firstElementKTime(a, n, k)<<endl;
	}
	
	return 0;
}
// } Driver Code Ends