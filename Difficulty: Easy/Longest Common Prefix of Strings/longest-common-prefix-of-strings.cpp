class Solution {
public:
    string longestCommonPrefix(vector<string> arr) {
        
        string ans = "";

        for (int i = 0; i < arr[0].size(); i++) {
            
            char ch = arr[0][i]; // e

            for (int j = 1; j < arr.size(); j++) {
                
                // If current string is shorter
                // or character doesn't match
                if (i >= arr[j].size() || arr[j][i] != ch) {
                    return ans;
                }
            }

            ans += ch;  // ans=gee
        }

        return ans;
    }
};