# Problem: find kth largest element 

## Platform
LeetCode  

## Difficulty
Medium  

---
## 🧠 Approach
-Uses a min-heap to keep track of the k largest elements.
-Pushes each number and pops the smallest if heap size exceeds k.
-After all numbers, the top of the heap is the k-th largest element.

```cpp
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int,vector<int>,greater<int>> minh;
    for(int i=0;i<nums.size();i++){
        minh.push(nums[i]);
        if(minh.size()>k){
            minh.pop();
        }
    }
    return minh.top();
    }
};
