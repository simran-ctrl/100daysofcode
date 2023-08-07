//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest(int arr[], int n, int target) 
    { 
        // Complete the function
          int closest = INT_MAX;  // Initialize with a large value
    int diff = INT_MAX;     // Initialize with a large value

    for (int i = 0; i < n; i++) {
        int currentDiff = abs(arr[i] - target);

        if (currentDiff < diff || (currentDiff == diff && arr[i] > closest)) {
            diff = currentDiff;
            closest = arr[i];
        }
    }

    return closest;
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,target;
        cin>>n>>target;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(arr,n,target)<<endl;
    }
}

// } Driver Code Ends