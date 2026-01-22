# Problem: Binary Tree Zigzag Level Order Traversal

## Platform
LeetCode  

## Difficulty
Medium  

---
```cpp
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector<vector<int>> ans;
       if(root==NULL) return ans; 
    
        queue<TreeNode*> nodesQueue;
        nodesQueue.push(root);
        bool lefttoright=true;

        while(!nodesQueue.empty()){
            int size = nodesQueue.size();
            vector<int> row(size);

            for(int i=0;i<size;i++){
                TreeNode* node = nodesQueue.front();
                nodesQueue.pop();

                int index = lefttoright ? i : (size-1-i);
                row[index] = node->val;

                if(node->left){
                    nodesQueue.push(node->left);
                }
                if(node->right){
                    nodesQueue.push(node->right);
                }
            }
            lefttoright = !lefttoright;
            ans.push_back(row);
        }
        
        return ans;
    }
};
