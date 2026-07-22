class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0, j=1;
        int n = prices.size();
        int max_profit = 0;
        while(j<n){
            if(prices[j]<prices[i]){
                i=j;
            }
            else{
                max_profit = max(max_profit, prices[j]-prices[i]);
            }
            j++;
        }
        return max_profit;
    }
};
