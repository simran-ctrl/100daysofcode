//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method */
    int findMaxDiff(int A[], int n)
    {
           stack<int> s; // Stack to store indices of potential nearest left smaller elements
    vector<int> leftSmaller(n); // To store the nearest left smaller element for each index

    // Finding nearest left smaller element for each element
    for (int i = 0; i < n; ++i) {
        while (!s.empty() && A[s.top()] >= A[i]) {
            s.pop();
        }
        leftSmaller[i] = s.empty() ? 0 : A[s.top()];
        s.push(i);
    }

    // Clear the stack for reusing it for finding nearest right smaller elements
    while (!s.empty()) {
        s.pop();
    }

    int maxDiff = 0;

    // Finding the maximum absolute difference between nearest left and right smaller elements
    for (int i = n - 1; i >= 0; --i) {
        while (!s.empty() && A[s.top()] >= A[i]) {
            s.pop();
        }
        int rightSmaller = s.empty() ? 0 : A[s.top()];
        s.push(i);
        
        // Update the maximum absolute difference
        maxDiff = max(maxDiff, abs(leftSmaller[i] - rightSmaller));
    }

    return maxDiff;
      //Your code here
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
   	for(int i=0;i<n;i++)
   	cin>>a[i];
   	Solution ob;
   	cout<<ob.findMaxDiff(a,n)<<endl;
   }
    return 0;
}



// } Driver Code Ends