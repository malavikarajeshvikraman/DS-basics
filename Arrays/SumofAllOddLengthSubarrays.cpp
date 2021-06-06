class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum,result=0;
        int len=0;
        for(int i =0;i<arr.size();i++)
        { sum=0;
           len=0;
            for(int j=i;j<arr.size();j++)
            {   sum+=arr[j];
             len++;
                if((len)%2!=0)
                {   
                    result+=sum; }
            }
            
        }
        return result;
        
    }
};