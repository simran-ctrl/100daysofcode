//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


// } Driver Code Ends
class Solution 
{
    public:
    //Function to find a solved Sudoku.
    bool isSafe(int grid[N][N], int row, int col, int num) {
    // Check the row and column
    for (int i = 0; i < N; i++) {
        if (grid[row][i] == num || grid[i][col] == num) {
            return false;
        }
    }

    // Check the 3x3 sub-grid
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == num) {
                return false;
            }
        }
    }

    return true;
}

// Function to find an empty cell in the grid.
bool findEmptyCell(int grid[N][N], int& row, int& col) {
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (grid[row][col] == 0) {
                return true;
            }
        }
    }
    return false;
}

    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
         int row, col;

    if (!findEmptyCell(grid, row, col)) {
        // All cells are filled, Sudoku solved.
        return true;
    }

    // Try digits 1 to 9 in the empty cell.
    for (int num = 1; num <= 9; num++) {
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num;

            if (SolveSudoku(grid)) {
                // If the recursive call returns true, the Sudoku is solved.
                return true;
            }

            // If the recursive call doesn't return true, backtrack.
            grid[row][col] = 0;
        }
    }

    // No solution found for this configuration.
    return false;
}

    
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << grid[i][j] << " ";
        }
        
    }
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends