//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
  public:
    vector<int> arranged(int a[],int n)
    {
    
    std::vector<int> result(n);

    int positiveIndex = 0;
    int negativeIndex = 1;

    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            result[positiveIndex] = a[i];
            positiveIndex += 2;
        } else {
            result[negativeIndex] = a[i];
            negativeIndex += 2;
        }
    }

    return result;
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
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    vector<int> ans;
    Solution obj;
    ans=obj.arranged(a,n);
    for(i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
    }
}

// } Driver Code Ends