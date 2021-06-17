class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> result;
        
        for(int i=0;i<=n;i++)
        { int count=0;
          int j=i;
           while(j)
         {
             j=j & (j-1);
             count++;
         }
            result.push_back(count);
        }
        return result;
        
        
    }
};