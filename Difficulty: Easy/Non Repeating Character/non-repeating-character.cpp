class Solution {
public:
    char nonRepeatingChar(string &s) {
        int freq[256] = {0};

        // Count frequency
        for (int i = 0; i < s.length(); i++) {
            freq[s[i]]++;
        }

        // Find first character with frequency 1
        for (int i = 0; i < s.length(); i++) {
            if (freq[s[i]] == 1) {
                return s[i];
            }
        }

        return '$';
    }
};