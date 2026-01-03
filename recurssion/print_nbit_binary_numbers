# Problem: Print N-bit binary numbers having more 1's than 0's for any prefix

## Platform: Leetcode

## Difficulty: Easy 

---

## 🧠 Approach
#DSA #C++ #ProblemSolving
- Built binary strings of length `N` using recursion
- Maintained count of `1`s and `0`s at each step to validate prefixes
- Allowed adding `'1'` at any step since it always keeps the prefix valid
- Allowed adding `'0'` only when number of `1`s was greater than number of `0`s
- Ensured that the prefix condition (1s ≥ 0s) is satisfied throughout the recursion
- Printed the binary string once the required length `N` was reached

---

## 💻 Code (C++)

```cpp
//function for solve
void solve(int one, int zero, int n, int op){
if(n==0){
cout<<op<<" ";
return;
}
string op1=op;
op.push_back('1');
solve(one+1, zero,n-1,op1);

if(one>zero){
string op2=op;
op2.push_back('0');
solve(one,zero+1,n-1,op2);
return ;
}
};
