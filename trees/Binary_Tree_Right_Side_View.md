# Problem : Binary Tree Right Side View

```cpp
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        recursivesolution(root, 0, res);
        return res;
    }

    void recursivesolution(TreeNode *root, int level, vector<int>& res){
        if(root == NULL) return;
        if(res.size() == level) res.push_back(root->val);
        recursivesolution(root->right, level+1, res);
        recursivesolution(root->left, level+1, res);
    }
};
