# Problem: Letter Case Permutation

## Platform
LeetCode  

## Difficulty
Medium  

---

```cpp
class Solution {
public:
    string removeOccurrences(string s, string part) {
     while(s.length()>0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
     } 
    return s;
    }
};
