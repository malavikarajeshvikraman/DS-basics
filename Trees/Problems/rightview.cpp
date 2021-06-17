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
       vector <int> temp;
    
    vector<int> rightSideView(TreeNode* root) {
       
      if (!root)
        return temp;
  
    queue<TreeNode * > q;
    q.push(root);
  
    while (!q.empty())
    {    
        // number of nodes at current level
        int n = q.size();
          
        // Traverse all nodes of current level 
        for(int i = 1; i <= n; i++)
        {
            TreeNode*  cur = q.front();
            q.pop();
                  
            // Print the right most element 
            // at the level
            if (i == n)
                temp.push_back(cur->val);
              
            // Add left node to queue
            if (cur->left != NULL)
                q.push(cur->left);
  
            // Add right node to queue
            if (cur->right != NULL)
                q.push(cur->right);
        }
    }
        return temp;
        
    }
};