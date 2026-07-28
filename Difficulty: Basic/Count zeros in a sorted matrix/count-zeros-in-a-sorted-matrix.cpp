class Solution {
  public:
    int countZeros(vector<vector<int>>& mat) {

        int n = mat.size();
        int zeros = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 0) {
                    zeros++;
                }
            }
        }

        return zeros;
    }
};