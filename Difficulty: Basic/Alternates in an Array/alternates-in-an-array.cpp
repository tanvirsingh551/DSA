class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        // code here
        int size = arr.size();
        vector<int> ans;
        for(int i = 0 ; i < size; i+=2){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};