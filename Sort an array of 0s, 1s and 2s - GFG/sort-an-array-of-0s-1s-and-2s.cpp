//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
         int low = 0;          // Pointer for 0s
    int high = n - 1;     // Pointer for 2s
    int mid = 0;          // Pointer for 1s
    
    while (mid <= high) {
        switch (a[mid]) {
            case 0:
                // Swap a[low] and a[mid], increment low and mid
                swap(&a[low], &a[mid]);
                low++;
                mid++;
                break;
            
            case 1:
                // No need to swap, just increment mid
                mid++;
                break;
            
            case 2:
                // Swap a[mid] and a[high], decrement high
                swap(&a[mid], &a[high]);
                high--;
                break;
        }
    }
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
        
    
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends