class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int pos [nums.size()+1];
        
        for(int i=0;i<nums.size()+1;i++)
        {
            pos[i]=1;
        }
        for(int i=0;i<nums.size();i++)
        {
            pos[nums[i]]--;
        }
        for(int i=0;i<nums.size()+1;i++)
        {
            if(pos[i]==1)
                return i;
        }
        return -1;
    }
};