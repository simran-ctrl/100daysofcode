//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // int partition(int arr[], int low, int high) {
    // int pivot = arr[high];
    // int i = low - 1;

    // for (int j = low; j <= high - 1; j++) {
    //     if (arr[j] < pivot) {
    //         i++;
    //         swap(arr[i], arr[j]);
    //     }
    // }

    // swap(arr[i + 1], arr[high]);
    // return i + 1;
// }
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
    //     if (k > 0 && k <= r - l + 1) {
    //     int pivotIndex = partition(arr, l, r);

    //     if (pivotIndex - l == k - 1) {
    //         return arr[pivotIndex];
    //     }

    //     if (pivotIndex - l > k - 1) {
    //         return kthSmallest(arr, l, pivotIndex - 1, k);
    //     }

    //     return kthSmallest(arr, pivotIndex + 1, r, k - pivotIndex + l - 1);
    // }

    // return -1;
     sort(arr + l, arr + r + 1);  // Sort the subarray from index l to r

    return arr[l + k - 1]; 
        
    }
};

//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends