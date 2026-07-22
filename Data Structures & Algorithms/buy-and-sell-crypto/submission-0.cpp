class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();

        int mani = prices[0];
        int profit = 0;

        for(int i=0;i<n;i++){
            if(prices[i]<mani){
                mani = prices[i];
            }

            profit = max(profit,prices[i]-mani);
        }
        return profit;
    }
};
