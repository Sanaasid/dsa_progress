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
    void fun(TreeNode* root, int sum, int &targetSum,vector<int> path, vector<vector<int>> &ans){
        if(root==NULL)
            return;
        sum+=root->val;
        
        path.push_back(root->val);
        if(root->left==NULL && root->right ==NULL){
            if(sum==targetSum){
                ans.push_back(path);
                path.pop_back();
                return ;
            }
                       
        }
        fun(root->left,sum, targetSum, path,ans);
        fun(root->right,sum, targetSum, path,ans);
    path.pop_back();
        return ;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> path;

        fun(root,0,targetSum,path,ans);

        return ans;
    }
};