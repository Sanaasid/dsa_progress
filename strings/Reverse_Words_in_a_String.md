# Problem: Reverse Words in a String

## Platform
LeetCode  

## Difficulty
Medium  

---

```cpp
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int i = 0;
        int n = s.length();
        string ans = "";
        while(i < n){
            while(i < n && s[i] == ' ') i++;

            string word = "";
            while(i < n && s[i] != ' '){
                word += s[i];
                i++;
            }

            reverse(word.begin(), word.end());
            if(word.length() > 0){
                ans += " " + word;
            }
        }
        return ans.substr(1);
    }
};
