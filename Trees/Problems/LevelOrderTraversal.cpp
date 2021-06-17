
class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {  vector<int> temp;
    if(node ==NULL)
           return temp;
        queue <Node *> Q;
        Q.push(node);
        while(!Q.empty())
        {   
            Node *cur = Q.front();
            temp.push_back(cur->data);
            if(cur->left!=NULL)
            Q.push(cur->left);
            if ( cur-> right != NULL)
            Q.push(cur->right);
            Q.pop();
        }
    }
};