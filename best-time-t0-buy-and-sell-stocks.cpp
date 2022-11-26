class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cheapest = prices[0];
        int maxprofit, profit;
        
        for(int i=0; i<prices.size(); i++) {
            cheapest = min(cheapest, prices[i]);
            profit = prices[i] - cheapest;
            maxprofit = max(maxprofit, profit); // Kadane's Algorithm
        }
        return maxprofit;
    }
};
