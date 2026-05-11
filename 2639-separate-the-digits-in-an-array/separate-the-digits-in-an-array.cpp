// class Solution {
// public:
//     vector<int> separateDigits(vector<int>& nums) {
//         vector<int> ans;
       
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]<10) ans.push_back(nums[i]);
//             else if(nums[i]>10){
//             int first= nums[i]/10;
//             ans.push_back(first);
//             int second=nums[i]%10;
//             ans.push_back(second);   
//             }         
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
       
        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] < 10) {
                ans.push_back(nums[i]);
            }
            else {

                vector<int> temp;
                int n = nums[i];

                while(n > 0) {
                    int digit = n % 10;
                    temp.push_back(digit);
                    n = n / 10;
                }

                reverse(temp.begin(), temp.end());

                for(int j = 0; j < temp.size(); j++) {
                    ans.push_back(temp[j]);
                }
            }
        }

        return ans;
    }
};