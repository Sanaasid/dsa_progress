# Problem:  K Closest Points to Origin

## Platform
LeetCode  

## Difficulty
Medium  

---

## 🧠 Approach
using maxheap and distance formula

```cpp
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, pair<int,int>>> maxh;
        for (int i = 0; i < points.size(); i++) {
            int x = points[i][0];
            int y = points[i][1];
            int dist = x*x + y*y;
            maxh.push({dist, {x, y}});
            if (maxh.size() > k) {
                maxh.pop();
            }
        }
        vector<vector<int>> ans;
        while (!maxh.empty()) {
            auto p = maxh.top().second;
            ans.push_back({p.first, p.second});
            maxh.pop();
        }

        return ans;
    }
};

