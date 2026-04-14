class Solution {
public:
    int firstsearch(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int foc = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                foc = mid;         
                end = mid - 1;     
            } else if (target < nums[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return foc;
    }

    int lastsearch(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int loc = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                loc = mid;         
                start = mid + 1;   
            } else if (target < nums[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return loc;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstsearch(nums, target);
        int last = lastsearch(nums, target);
        return {first, last};
    }
};
