class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
    int ans=0;
    for(int i=0;i<nums.size();i++){
        int count=0;
        for(int j=i;j<nums.size();j++){
            count+=(nums[j]==target ? 1 : -1);
            if(count>0){
                ++ans;
            }
    } 
    }  
    return ans;
    }
};

// Key Trick

// Instead of counting how many times target appears in every subarray, we transform the array:

// target → +1
// any other element → -1