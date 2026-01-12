# Problem: Search in a 2D Matrix

## Platform
LeetCode  

## Difficulty
Medium  

---

```cpp
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        if (n == 0) return false;
        int m = matrix[0].size();
        for(int i = 0; i < n; i++) {
            if(matrix[i][0] <= target && target <= matrix[i][m-1]) {
                return binarySearch(matrix[i], target);
            }
        }
        return false;
    }
    bool binarySearch(vector<int>& row, int target){
        int start = 0;
        int end = row.size() - 1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(row[mid] == target){
                return true;
            }
            else if(row[mid] < target){
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return false;
    }
};
