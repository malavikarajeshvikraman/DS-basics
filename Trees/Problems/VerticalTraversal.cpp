class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        map<int, vector<int>> m;
        queue <pair<Node *,int>> Q;
        Q.push({root,0});
        while(!Q.empty())
        {
            Node *cur = Q.front().first;
            int h =Q.front().second;
            Q.pop();
            
            if(m.find(h)==m.end())
            {
                vector <int> out;
                out.push_back(cur->data);
                m[h]=out;
            }
            else
            {
                m[h].push_back(cur->data);
            }
            if(cur->left)
            {
                Q.push({cur->left,h-1});
            }
            if(cur->right)
            {
                Q.push({cur->right,h+1});
            }
        }
    vector <int> result;
    for (auto x : m)
    {
        for(int a : x.second)
        {
            result.push_back(a);
        }
    }
    return result;
    
    }
    
   
};