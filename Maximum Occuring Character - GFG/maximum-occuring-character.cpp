//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        const int NUM_CHARACTERS = 26; // Number of lowercase alphabets
    std::vector<int> frequency(NUM_CHARACTERS, 0); // Initialize frequency array

    // Count the frequency of each character in the string
    for (char c : str) {
        frequency[c - 'a']++;
    }

    char maxChar = 'a'; // Initialize the max occurring character
    int maxFrequency = frequency[0]; // Initialize the max frequency

    // Traverse the frequency array to find the max occurring character
    for (int i = 1; i < NUM_CHARACTERS; i++) {
        if (frequency[i] > maxFrequency) {
            maxFrequency = frequency[i];
            maxChar = 'a' + i;
        }
    }

    return maxChar;
        // Your code here
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends