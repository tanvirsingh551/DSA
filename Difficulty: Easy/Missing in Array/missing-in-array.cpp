class Solution {
public:
    int missingNum(vector<int>& arr) {
        int n = arr.size();

        int expectedSum = 0;
        int actualSum = 0;

      
        for (int i = 1; i <= n + 1; i++) {
            expectedSum += i;
        }

       
        for (int i = 0; i < n; i++) {
            actualSum += arr[i];
        }

        return expectedSum - actualSum;
    }
};