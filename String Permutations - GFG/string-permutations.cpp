//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
void generate_permutations(string current, string remaining, vector<string>& result) {
    if (remaining.empty()) {
        result.push_back(current);
    } else {
        for (int i = 0; i < remaining.length(); ++i) {
            string new_current = current + remaining[i];
            string new_remaining = remaining.substr(0, i) + remaining.substr(i + 1);
            generate_permutations(new_current, new_remaining, result);
        }
    }
}

    vector<string> permutation(string S)
    {
        
     vector<string> result;
    generate_permutations("", S, result);
    sort(result.begin(), result.end()); // Sort the result vector
    return result;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends