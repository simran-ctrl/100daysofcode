//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int multiply(int arr[], int n);


int main() {
	//code
	int t;
	cin>>t;
	while (t--)
	{
	    int n,sum1=0,sum2=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    cout << multiply(a, n) << endl;
	    
	}
	return 0;
}
// } Driver Code Ends


//User function Template for C++

int multiply(int arr[], int n)
{
     int left_sum = 0;
    int right_sum = 0;

    // Calculate the sum of elements in the left sub-array (n/2 elements)
    for (int i = 0; i < n / 2; i++) {
        left_sum += arr[i];
    }

    // Calculate the sum of elements in the right sub-array (n/2 + 1 elements if n is odd)
    for (int i = n / 2; i < n; i++) {
        right_sum += arr[i];
    }

    // Multiply the sums of left and right sub-arrays and return the result
    return left_sum * right_sum;
    // Complete the function
}