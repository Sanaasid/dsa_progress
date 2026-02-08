# Problem : Validate Binary Search Tree

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root,long long low=LLONG_MIN, long long high=LLONG_MAX) {
    if (root==NULL) return true;
    int cur=root->val;
    if (cur <= low || cur >= high) {
            return false;
        }
        return isValidBST(root->left,low,cur) && isValidBST(root->right,cur,high );     
        }
   
};
