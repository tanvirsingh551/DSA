class Solution {
  public:
    void booleanMatrix(vector<vector<int>>& mat) {
        
        int rows = mat.size();
        int cols = mat[0].size();

        vector<int> row(rows, 0);
        vector<int> col(cols, 0);

        // Mark the rows and columns
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (mat[i][j] == 1)
                {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        // Update the matrix
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (row[i] == 1 || col[j] == 1)
                {
                    mat[i][j] = 1;
                }
            }
        }
    }
};