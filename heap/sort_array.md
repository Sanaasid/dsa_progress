# Problem: Letter Case Permutation

## Platform
LeetCode  

## Difficulty
Easy 

---

## 🧠 Approach
created hash, and used minheap 

---

```cpp
class Solution{
public:
    vector<int> frequencySort(vector<int>& nums){
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>,vector<pair<int,int>>,function<bool(pair<int,int>,pair<int,int>)>> maxh(
            [](pair<int,int>a,pair<int,int>b){
                if(a.first==b.first)return a.second<b.second;
                return a.first>b.first;
            }
        );
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(auto i=mp.begin();i!=mp.end();i++){
            maxh.push({i->second,i->first});
        }

        while(maxh.size()>0){
            int freq=maxh.top().first;
            int ele=maxh.top().second;
            maxh.pop();
            for(int i=0;i<freq;i++){
                ans.push_back(ele);
            }
        }
        return ans;
    }
};
