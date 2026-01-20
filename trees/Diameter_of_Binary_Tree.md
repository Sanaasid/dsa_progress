# Problem: Diameter of Binary Tree

## Platform
LeetCode  

## Difficulty
Medium  

---
```cpp
class Solution {
public:
int maxi=0;
    int diameterOfBinaryTree(TreeNode* root) {
        findMax(root);
        return maxi;
    }
    int findMax(TreeNode* root){
        if(root==NULL) return 0;
        int lh=findMax(root->left);
        int rh=findMax(root->right);
        maxi=max(maxi,lh+rh);
               
        return 1+max(lh,rh);
        }
};
