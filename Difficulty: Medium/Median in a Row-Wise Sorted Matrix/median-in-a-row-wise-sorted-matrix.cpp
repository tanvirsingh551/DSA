class Solution {
public:
    int median(vector<vector<int>> &mat) {

        int rows = mat.size();
        int cols = mat[0].size();

        vector<int> arr;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                arr.push_back(mat[i][j]);
            }
        }

        sort(arr.begin(), arr.end());

        return arr[arr.size() / 2];
    }
};