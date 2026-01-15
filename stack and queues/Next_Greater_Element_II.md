# Problem: Next Greater Element II

## Platform
LeetCode  

## Difficulty
Medium  

---
```cpp
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);

        for(int i = 0; i < n; i++) {
            for(int j = 1; j < n; j++) {
                int ind = (i + j) % n;

                if(nums[ind] > nums[i]) {
                    ans[i] = nums[ind];
                    break;
                }
            }
        }

        return ans;
    }
};
