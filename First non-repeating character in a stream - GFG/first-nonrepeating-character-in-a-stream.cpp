//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		   unordered_map<char,int> mp;
		   queue<char> q;
		   string ans="";
		   for(char c: A){
		       mp[c]++;
		       if(mp[c]==1){
		           q.push(c);
		       }
		       while(!q.empty() && mp[q.front()]>1){
		           q.pop();
		       }
		       if(q.empty()){
		           ans+='#';
		           
		       }
		       else{
		           ans+=q.front();
		       }
		   }
		   return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends