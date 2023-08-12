//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        // Your code goes here
       int sumA = 0, sumB = 0;
    for (int i = 0; i < n; i++) {
        sumA += A[i];
    }
    for (int i = 0; i < m; i++) {
        sumB += B[i];
    }

    int diff = abs(sumA - sumB);
    if ((sumA + sumB) % 2 != 0) {
        return -1;  // No way to make the sums equal
    }

    int target = (sumA + sumB) / 2;
    unordered_set<int> setA(A, A + n);

    for (int i = 0; i < m; i++) {
        int neededValueInA = B[i] + target - sumB;
        if (setA.find(neededValueInA) != setA.end()) {
            return 1;  // A pair of values exists
        }
    }

    return -1; 
	}
 

};

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}






// } Driver Code Ends