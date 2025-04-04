class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& grid) 
    {
        for (int i = 0; i < 9; i++) 
        {
            unordered_map<char, int> row, col;
            
            for (int j = 0; j < 9; j++) 
            {
                if (grid[i][j] != '.') 
                {
                    row[grid[i][j]]++;
                    if (row[grid[i][j]] > 1) return false;
                }
                
                if (grid[j][i] != '.') 
                {
                    col[grid[j][i]]++;
                    if (col[grid[j][i]] > 1) return false;
                }
            }
        }
        
        for (int r = 0; r < 3; r++) 
        {
            for (int c = 0; c < 3; c++) 
            {
                unordered_map<char, int> box;
                
                for (int i = 3 * r; i < 3 * r + 3; i++) 
                {
                    for (int j = 3 * c; j < 3 * c + 3; j++) 
                    {
                        if (grid[i][j] != '.') 
                        {
                            box[grid[i][j]]++;
                            if (box[grid[i][j]] > 1) return false;
                        }
                    }
                }
            }
        }
        
        return true;
    }
};
