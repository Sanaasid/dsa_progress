class Solution {
public:
    int maxNumberOfBalloons(string text) {
    string target = "balloon";
    unordered_map<char,int> mp;
    for(char ch: target){
        mp[ch]++;
    }
    unordered_map<char,int> freq;
    for(char cc: text){
        freq[cc]++;
    }
    int ans = INT_MAX;

        for(auto it : mp) {
            ans = min(ans, freq[it.first] / it.second);
        }

        return ans;
    }
};