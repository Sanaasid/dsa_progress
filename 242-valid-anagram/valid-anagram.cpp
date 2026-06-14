class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> mp;

        for(char ch: s){
            mp[ch]++;
        } 
        unordered_map<char,int> mpt;

        for(char ch: t){
            mpt[ch]++;
        } 
        if(mp==mpt) return true;
        return false;

    }
};