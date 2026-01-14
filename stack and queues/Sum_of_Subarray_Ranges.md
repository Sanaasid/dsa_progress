# Problem: Sum of Subarray Ranges

## Platform
LeetCode  

## Difficulty
Medium  

---



```cpp

//bruteforce

class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
    int sum=0;
    int n=nums.size();
    for(int i=0;i<=n-1;i++){
        int largest=nums[i];
        int smallest=nums[i];
    for(int j=i+1;j<=n-1;j++){
        largest=max(largest,nums[j]);
        smallest=min(smallest,nums[j]);
        sum+=(largest-smallest);
    }
    }
    return sum;
    }
};

//optimal solution
vector<int> findNse(vector<int>& arr){
        int n = arr.size();
        vector<int> nse(n);
        stack<int> st;

        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            nse[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return nse;
    }

    vector<int> findPsee(vector<int>& arr){
        int n = arr.size();
        vector<int> pse(n);
        stack<int> st;

        for(int i = 0; i < n; i++){
            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }
            pse[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return pse;
    }

    long long sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> nse = findNse(arr);
        vector<int> pse = findPsee(arr);

        long long total = 0;
       

        for(int i = 0; i < n; i++){
            long long left = i - pse[i];
            long long right = nse[i] - i;
            total = (total + (left * right) * arr[i] ) ;
        }
        return total;
    }
    vector<int> findNge(vector<int>& arr){
        int n = arr.size();
        vector<int> nge(n);
        stack<int> st;

        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && arr[st.top()] <= arr[i]){
                st.pop();
            }
            nge[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return nge;
    }

    vector<int> findPge(vector<int>& arr){
        int n = arr.size();
        vector<int> pge(n);
        stack<int> st;

        for(int i = 0; i < n; i++){
            while(!st.empty() && arr[st.top()] < arr[i]){
                st.pop();
            }
            pge[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return pge;
    }

    long long sumSubarrayMaxs(vector<int>& arr) {
            int n = arr.size();
            vector<int> nge = findNge(arr);
            vector<int> pge = findPge(arr);


            long long total = 0;
     

        for(int i = 0; i < n; i++){
            long long left = i - pge[i];
            long long right = nge[i] - i;
            total = (total + (left * right) * arr[i]) ;
        }
        return total;
    
        }
    
long long subArrayRanges(vector<int>& arr) {
    return sumSubarrayMaxs(arr)-sumSubarrayMins(arr);
}
};
