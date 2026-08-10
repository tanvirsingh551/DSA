class Solution {
public:
    int getSmallest(int n) {
        
        if (n < 10)
            return n;

        int ans = 0;
        int place = 1;

        for (int i = 9; i >= 2; i--) {
            
            while (n % i == 0) {
                ans += i * place;
                place *= 10;
                n /= i;
            }
        }

        if (n != 1)
            return -1;

        return ans;
    }
};