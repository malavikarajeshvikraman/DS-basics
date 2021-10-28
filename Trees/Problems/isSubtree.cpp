class Solution
{
  public:
    //Function to check if S is a subtree of tree T.
    bool isidentical (Node *r1 , Node *r2)
    {
        if(r1 == NULL && r2 == NULL)
        {
            return true;
        }
        
        if(r1 == NULL  || r2 == NULL)
          return false;
          
         
         return r1->data==r2->data && isidentical(r1->left,r2->left) && isidentical(r1->right,r2->right);
    }
    bool isSubTree(Node* T, Node* S) 
    {
        if(T==NULL)
          return false;
        
        if(S==NULL)
          return true;
         
         bool ans;
         if(isidentical(T,S))
              return true;
        
        
         return isSubTree(T->left,S) || isSubTree(T->right,S);


        
        
    }
};