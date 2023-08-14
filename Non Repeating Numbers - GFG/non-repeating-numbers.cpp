//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        
        int xorResult = 0;
    for (int num : nums) {
        xorResult ^= num;
    }

    // Find the rightmost set bit in the XOR result
    int rightmostSetBit = xorResult & -xorResult;

    // Initialize the two distinct numbers
    int num1 = 0;
    int num2 = 0;

    // Separate the numbers based on the rightmost set bit
    for (int num : nums) {
        if (num & rightmostSetBit) {
            num1 ^= num;
        } else {
            num2 ^= num;
        }
    }

    // Return the numbers in increasing order
    if (num1 > num2) {
        std::swap(num1, num2);
    }

    return {num1, num2};
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends