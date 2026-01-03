# Problem: Generate Parentheses

## Platform
LeetCode  

## Difficulty
Medium  

---

## 🧠 Approach
#Recursion #DSA #C++

- Used recursion to generate all valid parentheses combinations
- Maintained two counters:
  - `open` → number of opening brackets remaining
  - `close` → number of closing brackets remaining
- At each recursive call:
  - Added `'('` if `open > 0`
  - Added `')'` only when `close > open` to ensure validity
- When both `open` and `close` become zero, stored the generated string in the result vector

---

## 💻 Code (C++)

```cpp
class Solution {
public:
    void solve(int open, int close,string op,vector<string>& v){
        if(open==0 && close==0){
            v.push_back(op);
            return;
        }
        if(open!=0){
            string op1=op;
            op1.push_back('(');
            solve(open-1, close, op1, v);
        }
        if(close>open){
            string op2=op;
            op2.push_back(')');
            solve(open, close-1, op2, v);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        int close = n;
        int open= n;
        string op= "";
        solve(open,close,op,v);
        return v;
    }
};
