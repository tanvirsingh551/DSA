class Solution {
  public:
    bool matSearch(vector<vector<int>> &arr, int x) {
 int rows = arr.size();
        int cols = arr[0].size();

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                if (arr[i][j] == x) {
                    return true;
                }
            }
        }

        return false;
    }
};