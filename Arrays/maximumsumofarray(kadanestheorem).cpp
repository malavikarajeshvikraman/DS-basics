class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxsum =INT_MIN;
        if (nums.size()==1)
        {
            return nums[0];
        }
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum<nums[i])
            {
                sum=nums[i];
            }
            maxsum=max(sum,maxsum);
        }
        return maxsum;
        
    }
};