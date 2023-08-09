//{ Driver Code Starts
//Initial Template for CPP

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
    	// Complete the function
    	 if (n < 3) {
        // There are not enough elements to form a triplet
        return -1;
    }
    
    // Sort the array in ascending order
sort(arr, arr + n);
    
    // Case 1: Product of last three elements (all positive)
    long long product1 = arr[n - 1] * arr[n - 2] * arr[n - 3];
    
    // Case 2: Product of first two and last element (handles negative numbers)
    long long product2 = arr[0] * arr[1] * arr[n - 1];
    
    // Return the maximum of the two products
    return max(product1, product2);
    	
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; long long arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    cout <<ob.maxTripletProduct(arr, n);
	    cout<<"\n";
	}
    return 0;
}
// } Driver Code Ends