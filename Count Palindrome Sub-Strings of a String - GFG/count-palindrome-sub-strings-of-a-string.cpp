//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int CountPS(char S[], int N);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        char S[N+1];
        cin>>S;
        cout<<CountPS(S,N)<<endl;
    }
    return 0;
}


// } Driver Code Ends



int CountPS(char S[], int N)
{
    int count = 0;

    // Consider each character as a center and expand around it to count odd length palindromes
    for (int center = 0; center < N; center++) {
        int left = center - 1;
        int right = center + 1;

        while (left >= 0 && right < N && S[left] == S[right]) {
            count++;
            left--;
            right++;
        }
    }

    // Consider each pair of adjacent characters as a center and expand around it to count even length palindromes
    for (int center = 0; center < N - 1; center++) {
        int left = center;
        int right = center + 1;

        while (left >= 0 && right < N && S[left] == S[right]) {
            count++;
            left--;
            right++;
        }
    }

    return count;
}