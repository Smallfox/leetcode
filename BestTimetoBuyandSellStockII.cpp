class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if(prices.size() <= 1)  return 0;
        
        int profit = 0;
        for(int i = 1; i < prices.size(); ++i) {
            int fund = prices[i] - prices[i-1];
            if(fund > 0)
                profit += fund;
        }
        return profit;
    }
};
