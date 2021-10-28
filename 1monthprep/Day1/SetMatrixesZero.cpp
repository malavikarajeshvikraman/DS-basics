class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        map <int,int> m1;
        map <int,int> m2;
        for(int i=0;i<m;i++)
        {
            m1[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            m2[i]=0;
        }
        
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    m1[i]++;
                    m2[j]++;
                }
            }
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
         {
                           
                     if(m1[i] != 0 )
                     {
                         matrix[i][j]=0;
                     }
                       if(m2[j] != 0 )
                     {
                         matrix[i][j]=0;
                     }
         }
    }
};