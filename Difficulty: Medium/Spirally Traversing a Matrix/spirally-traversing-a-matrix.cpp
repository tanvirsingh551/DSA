class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        
        vector<int> ans;
        
        int rows = mat.size();
        int cols = mat[0].size();
        
        int top = 0;
        int bottom = rows - 1;
        int left = 0;
        int right = cols - 1;
        
        while (top <= bottom && left <= right) {
            
            // Traverse top row
            for (int i = left; i <= right; i++) {
                ans.push_back(mat[top][i]);
            }
            top++;
            
            // Traverse right column
            for (int i = top; i <= bottom; i++) {
                ans.push_back(mat[i][right]);
            }
            right--;
            
            // Traverse bottom row
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    ans.push_back(mat[bottom][i]);
                }
                bottom--;
            }
            
            // Traverse left column
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(mat[i][left]);
                }
                left++;
            }
        }
        
        return ans;
    }
};