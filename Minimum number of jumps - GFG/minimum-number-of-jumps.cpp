//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        if (n <= 1) {
        return 0; // No jumps required for an array with 0 or 1 elements
    }

    if (arr[0] == 0) {
        return -1; // Cannot move through the first element
    }

    int maxReach = arr[0]; // Maximum reachable position from the current position
    int steps = arr[0];    // Number of steps you can take from the current position
    int jumps = 1;          // Minimum number of jumps

    for (int i = 1; i < n; i++) {
        if (i == n - 1) {
            return jumps; // Reached the end of the array
        }

        maxReach = max(maxReach, i + arr[i]);
        steps--;

        if (steps == 0) {
            if (i >= maxReach) {
                return -1; // Cannot move further
            }

            steps = maxReach - i;
            jumps++;
        }
    }

    return -1; 
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends