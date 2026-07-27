class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int maxi= INT_MIN;
    //    for(int i=0;i<nums.size();i++){
    //     for(int j=i+1;j<nums.size();j++){
    //         for(int k=j+1;k<nums.size();k++){
    //             maxi= max(maxi, nums[i]*nums[j]*nums[k]);
    //         }
    //     }
    //    } 
    //    return maxi;
    sort(nums.begin(), nums.end());
    int n= nums.size();
    return max(nums[n-1] * nums[n-2] * nums[n-3],
                   nums[0] * nums[1] * nums[n-1]);
    }
};