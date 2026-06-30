#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // This is our main container that will hold all the rows
        vector<vector<int>> triangle;
        
        // Step 1: Loop through to build each row one by one
        for (int i = 0; i < numRows; ++i) {
            
            // Step 2: Create a single row. 
            // The size is 'i + 1', and we fill it with '1's.
            // This automatically handles the edges being 1!
            vector<int> row(i + 1, 1);
            
            // Step 3: Calculate the numbers inside the row.
            // We start at index 1 (skipping the first 1) 
            // and stop before the last index (skipping the last 1).
            for (int j = 1; j < i; ++j) {
                
                // The current number is the sum of the two numbers above it
                // triangle[i - 1] looks at the row right above us.
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
            
            // Step 4: Add this finished row to our main triangle
            triangle.push_back(row);
        }
        
        // Step 5: Give back the finished triangle!
        return triangle;
    }
};