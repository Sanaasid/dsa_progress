# Problem : Balanced Binary Tree

## Platform
LeetCode  

## Difficulty
Medium  

---
```cpp
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return check(root)!=-1;
    }
    int check(TreeNode* root){
        if(root==NULL) return 0;
        int lh=check(root->left);
        int rh=check(root->right);
        if(lh==-1 || rh==-1) return -1;
        if(abs(lh-rh)>1) return -1;
        return 1+max(lh,rh);
    }
};
