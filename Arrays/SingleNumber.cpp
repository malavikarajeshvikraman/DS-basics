// My solution 

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map <int,int> c;
        for(int i=0;i<nums.size();i++)
        {
            if(c.find(nums[i])==c.end())
            {
                c[nums[i]]=1;
            }
            else
            c[nums[i]]++;
        }
        for(auto x :c)
        {
            if(x.second==1)
                return x.first;
        }
        return -1;
    }
};

// preferred solution 

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> map;
        
        for(int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }
        
        for(int i = 0; i < nums.size(); i++){
            if(map[nums[i]] == 1){
                return nums[i];
            }
        }
        return 0;
    }
};