//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	 std::sort(arr, arr + n);
    std::sort(dep, dep + n);

    int platformsNeeded = 1;  // We need at least one platform for the first train
    int result = 1;           // Current platforms occupied
    int i = 1, j = 0;         // i points to next arrival, j points to next departure

    while (i < n && j < n) {
        if (arr[i] <= dep[j]) {
            result++;           // A train is arriving
            i++;
        } else if (arr[i] > dep[j]) {
            result--;           // A train is departing
            j++;
        }

        platformsNeeded = std::max(platformsNeeded, result);
    }

    return platformsNeeded;
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends