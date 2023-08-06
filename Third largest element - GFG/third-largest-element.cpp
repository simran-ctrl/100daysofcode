//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         //Your code here
           if (n < 3) {
       
        return -1;
    }
      int firstLargest = INT_MIN;
    int secondLargest = INT_MIN;
    int thirdLargest = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        if (a[i] > firstLargest) {
            thirdLargest = secondLargest;
            secondLargest = firstLargest;
            firstLargest = a[i];
        } else if (a[i] > secondLargest && a[i] < firstLargest) {
            thirdLargest = secondLargest;
            secondLargest = a[i];
        } else if (a[i] > thirdLargest && a[i] < secondLargest) {
            thirdLargest = a[i];
        }
    }

    return thirdLargest;








         
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
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends