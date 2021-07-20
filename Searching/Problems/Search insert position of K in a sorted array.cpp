class Solution {
public:
     int binarysearch ( vector<int> Arr,int n)
    {   int ans = 0;
        int start =0; int end = Arr.size()-1;
        while (start <= end)
        {   int mid =start+(end-1)/2;
            if(Arr[mid]==n)
               return mid;
            else if (Arr[mid]<n)
            {   ans =mid+1;
                start =mid+1;
            }
            else
                {   ans = mid;
                    end= mid-1;
                }
        }
       return ans;
    }
    int searchInsert(vector<int>& nums, int target) {
       
        int mid = binarysearch(nums,target);
        return mid;
    }
};