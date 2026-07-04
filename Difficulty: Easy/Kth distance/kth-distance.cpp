class Solution {
  public:
    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        int size = arr.size();

        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j <= i + k && j < size; j++) {
                if (arr[i] == arr[j]) {
                    return true;
                }
            }
        }

        return false;
    }
};