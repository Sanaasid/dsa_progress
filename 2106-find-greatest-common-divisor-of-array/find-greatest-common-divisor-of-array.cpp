class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallnum =INT_MAX;
        int largernum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            smallnum =min(smallnum, nums[i]);
            largernum =max(largernum,nums[i]);
            
        }
        return gcd(smallnum,largernum);
    }
};