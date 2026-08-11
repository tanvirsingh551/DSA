class Solution {
  public:
    string removeDuplicates(string &s) {
        bool visited[256] = {false};
        string ans = "";

        for (int i = 0; i < s.length(); i++) {
            if (visited[s[i]] == false) {
                ans += s[i];
                visited[s[i]] = true;
            }
        }

        return ans;
    }
};