# Problem: Distinct Subsequences (Recursive Exploration)


## Difficulty
Hard
---

## 🧠 Approach
#Recursion #Subsequences #C++

- Used input–output recursion to generate subsequences of a string
- Maintained two strings:
  - `ip` (input string)
  - `op` (output string)
- At each recursive call:
  - One call excludes the current character
  - Another call includes the current character in `op`
- Reduced the input string using `erase()` at every step
- Printed the generated subsequence when the input string became empty

> This implementation focuses on understanding recursive decision-making and subsequence generation.
> It is a brute-force learning approach and does not handle distinct counting or constraints of the actual problem.

---

## 💻 Code (C++)

```cpp
class Solution {
public:
    void solve(string ip, string op){
        if (ip.length() == 0){
            cout << op << " ";
            return;
        }

        string op1 = op;
        string op2 = op;

        op2.push_back(ip[0]);
        ip.erase(ip.begin());

        solve(ip, op1);
        solve(ip, op2);
    }

    int distinctSubseqII(string s) {
        string ip = s;
        string op = "";
        solve(ip, op);
        return 0;
    }
};
