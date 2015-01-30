class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if(!prices.size())   return 0;
        //int max = prices[0];
        int profit;
        int maxProfit = 0;
        int gap = prices[0];
        for(int i = 0; i < prices.size(); ++i) {
            profit = prices[i] - gap;
            if(profit > maxProfit)
                maxProfit = profit;
            if(gap > prices[i])
                gap = prices[i];
        }
        return maxProfit;
    }
};
