class Solution {
public:
    int countValidPrefixes(string s) {
        int zero=0;
        int ones=0;
        int result=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                zero++;
            }
            if(s[i]=='1'){
                ones++;
            }
            if (abs(zero - ones) <= 1)
                result++;
        }
        
        return result;
    }
};