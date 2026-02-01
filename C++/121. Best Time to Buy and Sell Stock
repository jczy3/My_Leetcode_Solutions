class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int left = 0;
        for (int right = 1; right < prices.size(); ++right)
        {
            while (prices[right] < prices[left])
            {
                ++left;
            }
            profit = max(profit, prices[right] - prices[left]);
        }
        return profit;
    }
};
