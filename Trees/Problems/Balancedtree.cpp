
class Solution{
    public:
    
    int height(Node *root)
    {
        if(!root) 
         return 0;
         
        int rheight = height(root->left)+1;
        int lheight = height(root->right)+1;
        
        return max(rheight,lheight);
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {   
        int rheight,lheight;
        if(root == NULL)
           return 1;

        rheight = height(root->left);
        lheight = height(root->right);
        
        if (abs(rheight-lheight)<=1  && isBalanced(root->left) && isBalanced(root->right))
        {
            return 1;
        }
      
            return 0;
    }
    
   
};