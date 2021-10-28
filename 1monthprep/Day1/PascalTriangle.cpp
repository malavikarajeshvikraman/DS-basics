// My way
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int cur = 0;
        vector<vector<int>> matrix;
        while (cur!=numRows+1)
        {
            vector<int> temp;
            if(cur==0)
            {
                temp.push_back(1);
            }
            else
            {
                int j=cur-1;
                int i=0;
                for(int i=0;i<cur;i++)
                {
                    if (i==0)
                        temp.push_back(1);
                    else if(i==cur-1)
                        temp.push_back(1);
                    else
                    {
                        temp.push_back(matrix[j][i-1]+matrix[j][i]);
                    }
                        
                }
            }
            matrix.push_back(temp);
            temp.erase(temp.begin(),temp.end());
            cur++;
        }
        matrix.erase(matrix.begin(),matrix.begin()+1);
        return matrix;
        
    }
};

//Correct way

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> rows;
        for (int i = 0; i < numRows; i++) {
            vector<int> row(i + 1, 1);
            for (int j = 1; j < i; j++) {
                row[j] = rows[i - 1][j - 1] + rows[i - 1][j];
            }
            rows.push_back(row);
        }
        return rows;
    }
};