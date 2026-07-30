class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        
        int rows = mat.size();
        int cols = mat[0].size();
        
        int row = -1;
        
        // Find the possible row
        for (int i = 0; i < rows; i++)
        {
            if (x <= mat[i][cols - 1])
            {
                row = i;
                break;
            }
        }
        
        // If no suitable row exists
        if (row == -1)
            return false;
        
       
        for (int j = 0; j < cols; j++)
        {
            if (x == mat[row][j])
                return true;
        }
        
        return false;
    }
};