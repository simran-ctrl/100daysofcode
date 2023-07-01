//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setBits(int n) {
        // Write Your Code here
         vector<int>v;
         int i=0;
        while(n>0){
            int r=n%2;
            n=n/2;
            i++;
            v.push_back(r);
        }
    int count=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==1){
                count++;
            }
            // return count;
        }
         return count;
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
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends