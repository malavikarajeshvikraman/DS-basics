class Solution {
public:
    
    int countsubset (vector <int> &nums,int sum)
    {
        int t[nums.size()+1][sum+1];
        for(int i =0;i<nums.size()+1;i++)
            for(int j=0;j<sum+1;j++)
            {
                if(i==0 && j==0)
                {
                    t[i][j] =1;
                }
                
                else if (i ==0)
                {
                    t[i][j]=0;
                }
                else if (j==0)
                {
                    t[i][j]=1;
                }
            }
        for(int i =1;i<nums.size()+1;i++)
            for(int j=1;j<sum+1;j++)
            {
                 if((nums[i-1]  <= j) && (nums[i-1]  != 0))
                    t[i][j] = t[i-1][j - nums[i-1]] + t[i-1][j];
                else
                    t[i][j] = t[i-1][j];
            }
    
                return t[nums.size()][sum];
        
  
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int range(0), cz(0); 
        for(auto c: nums)
            if(c == 0)
                cz++;
            else 
                range +=c;
                
        if(target > range)
            return 0;
        int sum =0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        
        
        if((sum+target)%2!=0)
            return 0;
        int ss = (sum + target )/ 2;
        
        
        return pow(2, cz)*countsubset(nums,ss);
        
    }
};