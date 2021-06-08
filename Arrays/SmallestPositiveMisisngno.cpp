class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        const int N = 1e6+2;
        bool check[N];
        for(int i =0;i<N;i++)
        {
            check[i]=false;
        }
        for(int i=0;i<nums.size();i++)
        {  
            if( nums[i]>=0 )
                 check[nums[i]] = true;
        }
        for(int i=1;i<N;i++)
        { 
            if(check[i]==false)
                return i;
        }
        
        return -1;
        
        
    }
};