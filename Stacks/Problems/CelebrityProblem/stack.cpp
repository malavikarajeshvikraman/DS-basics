class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {   
        stack<int> s;
        for (int i=0;i<n;i++)
        s.push(i);
        
        while(s.size() >=2)
        {
            int A = s.top();
            s.pop();
            int B = s.top();
            s.pop();
            if(M[A][B]==1)
                s.push(B);
            if(M[A][B]==0)
                s.push(A);
        }
        int know=0, known =0;
        for(int i=0;i<n;i++)
        {
            if (M[s.top()][i]==1)
                  know++;
            if(M[i][s.top()]==1)
                  known++;
        }
        if(known==n-1 && know == 0)
              return s.top();
        else
              return -1;
    }
};