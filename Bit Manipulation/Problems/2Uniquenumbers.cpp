class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xorsum=0;
        for(int i : nums)
        {
            xorsum= xorsum^i;
             cout<<i<<endl;
             cout<<"x "<<xorsum<<endl;
        }
        int newxor=0;
        int pos=0;
        int setbit=0;
        int tempxor=xorsum;
        while(setbit!=1)
        {
            setbit=xorsum&1;
            pos++;
            xorsum=xorsum>>1;
        }
        
        for(int i : nums)
        {
            if((i & 1<<(pos-1)))
            {  newxor=newxor^i;
              cout<<i<<endl;
              cout<<"n "<<newxor<<endl;
            }
        }
        
        vector<int>temp;
        temp={newxor,newxor^tempxor};
        return temp;
    }
};