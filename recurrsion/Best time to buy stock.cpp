LC :- https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    void stock(vector<int>& prices,int i, int& min_price, int& max_profit){
        if(i == prices.size()) return;

        if(prices[i] < min_price) min_price = prices[i];
        if((prices[i]-min_price)>max_profit) max_profit = prices[i]-min_price;
        stock(prices,i+1,min_price,max_profit);
    }
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = INT_MIN;
        stock(prices,0,min_price,max_profit);
        return max_profit;
    }
};
