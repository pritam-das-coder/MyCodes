class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min_idx=0;
        for(int i=1;i<n;i++){
            if(prices[min_idx]>prices[i]) min_idx=i;
        }
        int max_idx=min_idx+1;
        for(int i=min_idx+2;i<n;i++){
            if(prices[max_idx]<prices[i]) max_idx=i;
        }
        int profit=0;
        if(max_idx>=0 && max_idx<=n-1)
            profit=(prices[max_idx]-prices[min_idx]);
        if(profit<0) return 0;
        else return profit;
    }
};