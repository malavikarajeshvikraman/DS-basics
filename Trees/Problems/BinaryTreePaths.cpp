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
    vector<string> temp;
    string s;
    vector<string> binaryPaths(TreeNode* root ,string s) {
        
        if(!root)
                 return temp;
        s+=to_string(root->val);
        if(!root->left && !root->right)
            
        {      
            temp.push_back(s);
        }
    else {
         if(!root->left)
         {    s+="->";
          temp = binaryPaths(root->right,s);
             
         }
         else if(!root->right)
         { s+="->";
          temp = binaryPaths(root->left,s);
         }
         else {
              s+="->";
             temp = binaryPaths(root->left,s);
             temp = binaryPaths(root->right,s);
             
         }
       
         }
      return temp;
        
    }
    vector<string> binaryTreePaths(TreeNode* root ){
        return binaryPaths(root,s);
    }
};