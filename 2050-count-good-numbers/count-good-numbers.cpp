class Solution {
public:
  
      long long MOD = 1e9 + 7;

    long long power(long long a, long long b) {
        long long ans = 1;
        while(b > 0) {
            if(b % 2 == 1) {
                ans = (ans * a) % MOD;
            }
            a = (a * a) % MOD;
            b /= 2;
        }
        return ans;
    }

    int countGoodNumbers(long long n) {

        long long even = (n + 1) / 2;// odd or even indices count krliye kitne hain 
        long long odd = n / 2;

        long long ans = (power(5, even) * power(4, odd)) % MOD;
    // 5 hi dgits aa skti h even mein to 2,4,6,8,0, and odd index pe, 2,3,5,7
        return ans;  
    }
};