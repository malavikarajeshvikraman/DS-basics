class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
        int maxprofit =0;
        int minprice=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<minprice)
            {
                minprice=prices[i];
            }
            else if (maxprofit < prices[i]-minprice)
            {
                maxprofit=prices[i]-minprice;
            }
        }
        return maxprofit;
        
    }
};