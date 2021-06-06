class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        
        int m=0;
        int sum;
        for(int i=0;i<nums.size();i++)
        { 
            sum=nums[i];
            if(sum>m)
                        m=sum;
            
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]>nums[j-1])
                {
                     sum+=nums[j];
                     if(sum>m)
                        m=sum;
                }     
                   
                   
                else 
                    break;
                    
              
                
            }
        }
        return m;
        
    }
};