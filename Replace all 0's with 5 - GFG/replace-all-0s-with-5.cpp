//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    string numStr = to_string(n);
     for (int i = 0; i < numStr.length(); i++) {
        // If the character is '0', replace it with '5'
        if (numStr[i] == '0') {
            numStr[i] = '5';
        }
    }

    // Convert the modified string back to an integer
    int modifiedN = stoi(numStr);

    return modifiedN;

}