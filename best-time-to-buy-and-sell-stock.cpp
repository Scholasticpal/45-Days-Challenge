// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int ans = 0;
        int diff = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < min){
                min = prices[i];
            }
            diff = prices[i] - min;
            if(ans < diff){
                ans = diff;
            }
        }
        return ans;
    }
};
