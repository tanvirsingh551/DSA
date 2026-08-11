class Solution {
public:
    int longestUniqueSubstr(string &s) {
        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            bool visited[256] = {false};

            for (int j = i; j < s.length(); j++) {

                if (visited[s[j]] == true) {
                    break;
                }

                visited[s[j]] = true;

                ans = max(ans, j - i + 1);
            }
        }

        return ans;
    }
};