class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {  vector <int> temp1;
        if(!root) 
        return temp1;
        queue < pair <Node *,int> > Q;
        map <int,int>m;
        Q.push({root,0});
        while(!Q.empty())
        {   
                Node *cur=Q.front().first;
                int h = Q.front().second;
                Q.pop();
               if(!m[h]) {m[h]=cur->data;
               }
               
                if(cur->left)
                Q.push({cur->left,h-1});
                if(cur->right)
                Q.push({cur->right,h+1});
            
            
        }
        for (auto x :m)
         temp1.push_back(x.second);
        return temp1;
    }

};