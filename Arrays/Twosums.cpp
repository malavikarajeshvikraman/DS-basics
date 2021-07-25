class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>result;
        for(int i= 0;i<n;i++)
        {
            for ( int j=i+1;j<n;j++)
            {  
                if(nums[i]+nums[j]==target)
            {   result.push_back(i);
                result.push_back(j);
               break;
            }
            }
        }
        sort(result.begin(),result.end());
        return result;
    }
};


//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    unordered_set <int> r;
	    for(int i =0;i<n;i++)
	    {
	        int temp = x- arr[i];
	        if(r.find(temp)!=r.end())
	        {
	            return true;
	        }
	        else {
	        r.insert(arr[i]);
	        }
	    }
	    return false;
	}
};
