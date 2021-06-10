class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int row_start=0,row_end=matrix.size()-1,col_start=0,col_end=matrix[0].size()-1;
    vector <int> s;
        while(row_start<=row_end && col_start<=col_end)
        {
            for(int col=col_start;col<=col_end;col++)
            {s.push_back(matrix[row_start][col]);
             cout<<matrix[row_start][col]<<"First"<<"\n";
            }
            row_start++;
            if(matrix.size()*matrix[0].size()==s.size())
                break;
            for(int row=row_start;row<=row_end;row++)
            { s.push_back(matrix[row][col_end]);
             cout<<matrix[row][col_end]<<"Second"<<"\n";
            }
            col_end--;
            if(matrix.size()*matrix[0].size()==s.size())
                break;
           
            for(int col=col_end;col>=col_start;col--)
            { s.push_back(matrix[row_end][col]);
               cout<<matrix[row_end][col]<<"Third"<<"\n";
            }
            row_end--;
            if(matrix.size()*matrix[0].size()==s.size())
                break;
            
            for(int row=row_end;row>=row_start;row--)
            { s.push_back(matrix[row][col_start]);
              cout<<matrix[row][col_start]<<"Fourth"<<"\n";
            }
            col_start++;
            if(matrix.size()*matrix[0].size()==s.size())
                break;
            
        }
    return s;
        
    }
};