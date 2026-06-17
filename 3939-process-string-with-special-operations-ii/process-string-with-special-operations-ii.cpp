class Solution {
public:
    char processStr(string s, long long k) {
        int n= s.size();
        vector<long long> len(n+1,0);
        // for (char ch : s) {
        //     if (ch >= 'a' && ch <= 'z') {
        //         result += ch;
        //     }
        //     else if (ch == '*') {
        //         if (!result.empty())
        //             result.pop_back();
        //     }
        //     else if (ch == '#') {
        //         result += result;
        //     }
        //     else if (ch == '%') {
        //         reverse(result.begin(), result.end());
        //     }
        // }
        // if(k < 0 || k >= result.size())
        //     return '.';
        // return result[k];
        //

        //is question mein hume length track karni hai 
        const long long LIM = 1e18;

        for (int i = 0; i < n; i++) {
            char ch = s[i];

            if ('a' <= ch && ch <= 'z') {
                len[i + 1] = min(LIM, len[i] + 1);
            }
            else if (ch == '*') {
                len[i + 1] = max(0LL, len[i] - 1);
            }
            else if (ch == '#') {
                len[i + 1] = min(LIM, len[i] * 2);
            }
            else { // %
                len[i + 1] = len[i];
            }
        }

        if (k >= len[n]) return '.';

        for (int i = n - 1; i >= 0; i--) {
    char ch = s[i];

    if ('a' <= ch && ch <= 'z') {
        if (k == len[i])
            return ch;
    }
    else if (ch == '*') {
        // nothing
    }
    else if (ch == '#') {
        if (k >= len[i])
            k -= len[i];
    }
    else { // %
        k = len[i] - 1 - k;
    }
}

        return '.';
    }
};