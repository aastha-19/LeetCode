class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int profit=0;
        int maxprofit=0;

        for(int i=0; i<prices.size(); i++){
            mini=min(prices[i],mini);
            profit=prices[i]-mini;
            maxprofit=max(maxprofit,profit);
        }
        return maxprofit;
    }
};