class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
    int n=nums.size();
     vector<int> minindex(n);
     vector<int> maxindex(n);
    
    int stableindex=-1;
    maxindex[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            maxindex[i] = max(maxindex[i-1], nums[i]);
        }
    minindex[n-1] = nums[n-1];
        for (int i = n-2; i >= 0; i--) {
            minindex[i] = min(minindex[i+1], nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            stableindex=maxindex[i]-minindex[i];
            if(stableindex<=k)
                return i;
        }
        return -1;
    }
};