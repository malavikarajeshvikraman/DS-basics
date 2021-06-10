class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        int r=0;int c=m-1;
        if(n!=1 && m!=1)
        {
        while(r<n && c>=0)
        {
            if(target==matrix[r][c])
                return true;
            else if(target<matrix[r][c])
                c--;
            else
                r++;
            
        }
        }
        else if(n==1){
            for(int i=0;i<m;i++)
            {
                if(target==matrix[0][i])
                    return true;
            }
        }
         else if(m==1){
            for(int i=0;i<n;i++)
            {  
                if (target==matrix[i][0])
                     return true;
            }
        }
       
        return false;
        
    }
};