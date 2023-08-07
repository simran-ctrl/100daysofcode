//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       int leftSum = 0;
    int rightSum = 0;

    // Calculate the sum of the left and right halves of the array
    for (int i = 0; i < n / 2; i++) {
        leftSum += a[i];
    }
    for (int i = n / 2; i < n; i++) {
        rightSum += a[i];
    }

    // Calculate the absolute difference between the left and right sums
    return abs(leftSum - rightSum);
    }
};



//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.minValueToBalance(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends