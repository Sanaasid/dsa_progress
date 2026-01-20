# Problem: Binary Tree Maximum Path Sum

## Platform
LeetCode  

## Difficulty
Medium  

---
```cpp
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maxdown(root,maxi);
        return maxi;
    }
    int maxdown(TreeNode* node,int& maxi ){
        if(node==NULL) return 0;
        int leftsum=max(0,maxdown(node->left,maxi));
        int rightsum=max(0,maxdown(node->right,maxi));
        maxi=max(maxi,leftsum+rightsum+node->val);
        return (node->val)+max(leftsum,rightsum);
    }
};
