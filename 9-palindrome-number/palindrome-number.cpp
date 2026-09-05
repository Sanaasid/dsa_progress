class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;
        if (x == 0) return true;
        int original=x, reversed=0;
        while(x!=0){
            int digit=x%10;
            if (reversed> INT_MAX/10) return false;
            reversed = reversed*10+digit;
            x/=10;
        }
        return original == reversed;
    }
};