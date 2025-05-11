class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int n=prices.size();
        int profit=0;
        int cost=0;

        for(int i=1;i<n;i++){
            int buyingcost=prices[i];
            cost=buyingcost-mini;
            profit=max(profit,cost);
            mini=min(mini,buyingcost);

        }
        return profit;
    }
};