//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
    if (N == 0) {
        return 0; // Empty array
    }

    std::unordered_set<int> numsSet;
    
    // Insert all elements into the set
    for (int i = 0; i < N; ++i) {
        numsSet.insert(arr[i]);
    }

    int maxLength = 1;

    // For each element in the array, check for consecutive elements
    for (int i = 0; i < N; ++i) {
        if (numsSet.find(arr[i] - 1) == numsSet.end()) {
            int currentNum = arr[i];
            int currentLength = 1;

            while (numsSet.find(currentNum + 1) != numsSet.end()) {
                ++currentNum;
                ++currentLength;
            }

            maxLength = std::max(maxLength, currentLength);
        }
    }

    return maxLength;
}
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends