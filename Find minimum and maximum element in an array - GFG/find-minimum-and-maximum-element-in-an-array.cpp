//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
      if (n <= 0) {
        return make_pair(-1, -1);
    }
    long long minElement = a[0];
    long long maxElement = a[0];
    
      for (int i = 1; i < n; ++i) {
        if (a[i] < minElement) {
            minElement = a[i];
        }
        if (a[i] > maxElement) {
            maxElement = a[i];
        }
    }
    
    return make_pair(minElement, maxElement);

    
    
}