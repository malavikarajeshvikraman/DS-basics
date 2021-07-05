class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n = digits.size();
         int c=0;
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]!=9)
            { digits[i]++;
               break;
            }
            else
            {   c++;
                digits[i]=0;
               
            }
            
        }
        if(c==n)
        {
            digits.push_back(1);
            reverse(digits.begin(),digits.end());
        }
        
        
      
        return digits;
        
    }
};