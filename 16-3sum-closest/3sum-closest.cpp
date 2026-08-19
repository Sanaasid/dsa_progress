class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mindiff=INT_MAX;
        int resultsum=0;
        
        for(int i=0; i<n-2;i++){
           
            int left=i+1;
            int right=n-1;
            while(left<right){
            int newsum=nums[i]+ nums[left]+nums[right];
            int diff=abs(newsum-target);
            if(diff<mindiff){
                mindiff=diff;
                resultsum=newsum;
            }
            if(newsum==target){
                return newsum;
                
            }
            else if(newsum<target){
                left++;
            }
            else{
                right--;
            }
            
        }
        }
        
        return resultsum;
    }
};