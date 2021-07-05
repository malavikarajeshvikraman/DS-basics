class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n= matrix.size();
        int m = matrix[0].size();
        for(int i =0;i<n;i++)
            for(int j=i;j<m;j++)
            {   int temp;
                temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        for(int j=0;j<n;j++)
        {
            int i=0;
            int k=n-i-1;
            while(i!=n/2)
            {   cout<<i<<k<<endl;
                int temp;
                temp=matrix[j][i];
                matrix[j][i]=matrix[j][k];
                matrix[j][k]=temp;
                i++;
                k=n-i-1;
            }
        }
   
    }
        
    
};