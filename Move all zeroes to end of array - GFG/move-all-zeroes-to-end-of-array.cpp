//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	   int count = 0; // Count of non-zero elements
    
    // Traverse through the array and move non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
           swap( arr[count] , arr[i]);
            count++;
        }
    }
    
    // Fill the remaining elements with zeros
    while (count < n) {
        arr[count] = 0;
        count++;
    }
	        
	    
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends