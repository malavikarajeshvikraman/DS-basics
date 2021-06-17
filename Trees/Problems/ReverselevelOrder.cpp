vector<int> reverseLevelOrder(Node *root)
{
    vector<int> temp;
    if(root == NULL)
    {
        return temp;
    }
    queue <Node *> Q;
    Q.push(root);
    if(!Q.empty())
    {
        Node *cur = Q.front();
        temp.push_back(cur->data);
        cout<<cur->data;
        if(cur->right!=NULL)
        Q.push(cur->right);
        if(cur->left!=NULL)
        Q.push(cur->left);
        Q.pop();
        
    }
    reverse(temp.begin(),temp.end());
    return temp;
    
}