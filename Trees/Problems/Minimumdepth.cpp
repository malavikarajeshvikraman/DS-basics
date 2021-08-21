
class Solution{
  public:
    /*You are required to complete this method*/
    int minDepth(Node *root) {
      if(!root)
             return 0;
      if(!root->left && !root->right)
       return 1;
      
      int rheight = INT_MAX;
      int lheight = INT_MAX;
      if(root->left)   
      lheight = minDepth(root->left);
      if(root->right)
      rheight = minDepth(root->right);
      
      return min(lheight,rheight)+1;
    }
};
