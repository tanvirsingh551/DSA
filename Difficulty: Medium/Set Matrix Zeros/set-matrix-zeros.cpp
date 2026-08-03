class Solution {
public:
    void setMatrixZeroes(vector<vector<int>> &mat) {

        int rows = mat.size();
        int cols = mat[0].size();

        vector<int> row(rows, 1);
        vector<int> col(cols, 1);

        // Mark rows and columns containing a 0
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (mat[i][j] == 0) {
                    row[i] = 0;
                    col[j] = 0;
                }
            }
        }

        // Set required cells to 0
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (row[i] == 0 || col[j] == 0) {
                    mat[i][j] = 0;
                }
            }
        }
    }
};