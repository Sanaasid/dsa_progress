# Problem: Letter Case Permutation

## Platform
LeetCode  

## Difficulty
Medium  

---

## 🧠 Approach
using priority queue
finishing the tasks with the higher frequency first and doing in n+1 time and counting each time

```cpp
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26,0);
        for(char ch : tasks) freq[ch-'A']++;

        priority_queue<int> pq;
        for(int i=0;i<26;i++){
            if(freq[i]>0) pq.push(freq[i]);
        }

        int time = 0;

        while(!pq.empty()){
            vector<int> temp;
            int cycle = n + 1;
            int work = 0;

            for(int i=0; i<cycle && !pq.empty(); i++){
                int f = pq.top(); pq.pop();
                f--;
                work++;
                if(f > 0) temp.push_back(f);
            }

            for(int f : temp) pq.push(f);

            if(pq.empty())
                time += work;  
            else
                time += cycle; 
        }

        return time;
    }
};
