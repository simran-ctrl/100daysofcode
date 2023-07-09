//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
      
        bool present[n + 1] = { false };
 
   
    for (int i = 0; i < n; i++) {
 
        // Only mark the required elements
        // All non-positive elements and the elements
        // greater n + 1 will never be the answer
        // For example, the array will be {1, 2, 3} in the
        // worst case and the result will be 4 which is n +
        // 1
        if (arr[i] > 0 && arr[i] <= n)
            present[arr[i]] = true;
    }
 
    // Find the first element which didn't appear in the
    // original array
    for (int i = 1; i <= n; i++)
        if (!present[i])
            return i;
 
    // If the original array was of the type {1, 2, 3} in
    // its sorted form
    return n + 1;

    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends