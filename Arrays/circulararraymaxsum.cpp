class Solution {
public:
    
    int kadane ( vector<int>& nums)
    {
        int sum=0;
        int maxsum=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum<nums[i])
            {
                sum=nums[i];
            }
          maxsum=max(maxsum,sum);
        }
        return maxsum;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int nowrapsum = kadane(nums);
        int wrapsum=0;
        int totalsum=0;
        for(int i=0;i<nums.size();i++)
        {
            totalsum+=nums[i];
            nums[i]=-nums[i];
        }
        wrapsum=totalsum+kadane(nums);
        cout<<wrapsum<<nowrapsum;
        return max(wrapsum,nowrapsum);
    }
};