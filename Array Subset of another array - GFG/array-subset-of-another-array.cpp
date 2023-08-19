//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
    
      unordered_map<int, int> freqMap;

    // Populate the frequency map with elements from a1
    for (int i = 0; i < n; i++) {
        freqMap[a1[i]]++;
    }

    // Check if all elements of a2 are present with sufficient frequency
    for (int i = 0; i < m; i++) {
        if (freqMap.find(a2[i]) == freqMap.end() || freqMap[a2[i]] == 0) {
            return "No"; // a2[i] is not present in a1 or its frequency is zero
        }
        freqMap[a2[i]]--;
    }

    return "Yes"; 
}