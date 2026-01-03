# Problem: Top K frequent elements

## Platform
LeetCode  

## Difficulty
Medium  

---

## 🧠 Approach
use of hash and min heap

---
```cpp
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) mp[nums[i]]++;
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minh;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            minh.push({it->second, it->first});
            if (minh.size() > k) minh.pop();
        }
        
        vector<int> ans;
        while (!minh.empty()) {
            ans.push_back(minh.top().second);
            minh.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
