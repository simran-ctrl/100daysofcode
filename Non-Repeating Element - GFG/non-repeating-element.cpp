//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        // Complete the function
          unordered_map<int, int> frequency;

    // Count the frequency of each element
    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }

    // Find the first non-repeating element
    for (int i = 0; i < n; i++) {
        if (frequency[arr[i]] == 1) {
            return arr[i];
        }
    }

    // Return a default value (you can handle this differently based on your needs)
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
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.firstNonRepeating(arr,n)<<endl;
    }
}

// } Driver Code Ends