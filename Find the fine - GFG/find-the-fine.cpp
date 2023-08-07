//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    long long int totalFine(int n, int date, int car[], int fine[])
    {
        
  long long int total = 0;  // Initialize total fine to zero

    for (int i = 0; i < n; i++) {
        // Check if the car number is odd and the date is even
        // or if the car number is even and the date is odd
        if ((car[i] % 2 == 1 && date % 2 == 0) || (car[i] % 2 == 0 && date % 2 == 1)) {
            total += fine[i];  // Add fine to the total
        }
    }

    return total;
}
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, date;
        cin >> n >> date;
        int car[n], fine[n];
        
        for (i = 0; i < n; i++){
            cin >> car[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> fine[i];
        }
        Solution obj;
        cout << obj.totalFine(n, date, car, fine) << endl;
    }
    return 0;
}

// } Driver Code Ends