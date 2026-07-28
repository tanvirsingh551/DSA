class Solution {
  public:
int maxZeros(vector<vector<int>> arr) {

        int N = arr.size();
        int maxZeros = 0;
        int col = -1;

        for (int j = 0; j < N; j++) {
            int zeros = 0;

            for (int i = 0; i < N; i++) {
                if (arr[i][j] == 0) {
                    zeros++;
                }
            }

            if (zeros > maxZeros) {
                maxZeros = zeros;
                col = j;
            }
        }

        return col;
    }
};