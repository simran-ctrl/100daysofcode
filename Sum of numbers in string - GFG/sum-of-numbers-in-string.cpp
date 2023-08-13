//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	
    	// Your code here
    	 int sum = 0; // Initialize the sum
    int num = 0; // Temporary variable to store the current number
    
    for (char c : str) {
        if (isdigit(c)) {
            num = num * 10 + (c - '0'); // Accumulate digits to form the number
        } else {
            sum += num; // Add the accumulated number to the sum
            num = 0;    // Reset the temporary number variable
        }
    }
    
    sum += num; // Add the last accumulated number to the sum (if any)
    
    return sum;
    	
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}

// } Driver Code Ends