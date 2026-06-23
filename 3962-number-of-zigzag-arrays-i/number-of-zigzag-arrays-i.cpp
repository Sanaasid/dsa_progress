class Solution {
public:
    static const int MOD = 1e9 + 7;

    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;

        if (n == 1) return m;

        vector<long long> up(m), down(m);

        // length = 2
        for (int i = 0; i < m; i++) {
            up[i] = i;
            down[i] = m - 1 - i;
        }

        for (int len = 3; len <= n; len++) {
            vector<long long> newUp(m), newDown(m);

            // prefix sums of down
            long long pref = 0;
            for (int i = 0; i < m; i++) {
                newUp[i] = pref;
                pref = (pref + down[i]) % MOD;
            }

            // suffix sums of up
            long long suff = 0;
            for (int i = m - 1; i >= 0; i--) {
                newDown[i] = suff;
                suff = (suff + up[i]) % MOD;
            }

            up = move(newUp);
            down = move(newDown);
        }

        long long ans = 0;
        for (int i = 0; i < m; i++) {
            ans = (ans + up[i] + down[i]) % MOD;
        }

        return ans;
    }
};