class Solution {
public:
    string reverseWords(string &s) {
        
        vector<string> arr;
        string temp = "";

        for(int i = 0; i < s.length(); i++) {
            
            if(s[i] != '.') {
                temp += s[i];
            }
            else {
                if(temp != "") {
                    arr.push_back(temp);
                    temp = "";
                }
            }
        }

        // Last word
        if(temp != "") {
            arr.push_back(temp);
        }

        string ans = "";

        for(int i = arr.size() - 1; i >= 0; i--) {
            ans += arr[i];

            if(i != 0) {
                ans += '.';
            }
        }

        return ans;
    }
};