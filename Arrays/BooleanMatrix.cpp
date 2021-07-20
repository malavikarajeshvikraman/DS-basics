class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {int R = matrix.size();
    int C = matrix[0].size();
    int rows[R] = {0};
    int  columns[C] = {0};
    for (int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            if(matrix[i][j]==1)
            {
                rows[i]=1;
                columns[j]=1;
            }
        }
    }
    
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            if(rows[i]==1 || columns[j]==1)
                     matrix[i][j]=1;
        }
    }
    }
};
