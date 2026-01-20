# Problem: Largest Rectangle in Histogram

## Platform
LeetCode  

## Difficulty
Hard

---

```cpp
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n =heights.size();
        stack<int>st;
        vector<int>leftsmall(n);
        vector<int>rightsmall(n);
        for(int i =n-1 ;i>=0;i--){
            while(st.size()>0&&heights[st.top()]>heights[i]){
                st.pop();
            }
            rightsmall[i]=st.empty()?n:st.top();
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        for(int i =0 ;i<n;i++){
            while(st.size()>0&&heights[st.top()]>=heights[i]){
                st.pop();
            }
            leftsmall[i]=st.empty() ? -1:st.top();
            st.push(i);
        }
        int area =0;
        for(int i =0;i<n;i++){
        int width=(rightsmall[i]-leftsmall[i]-1);
        area= max(area,heights[i]*width);
        }
        return area;
       
        
    }
    

};
