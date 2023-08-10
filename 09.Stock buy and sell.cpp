/*
 link -> https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
*/


class Solution {
public:
    int maxProfit(vector<int>& a) {

        int mini = a[0],profit=0;
        for(int i = 1;i<a.size();i++)
        {
            int cost = a[i]-mini; //price after selling the stock
            profit=max(profit,cost);
            mini = min(mini,a[i]);
        }
        return profit;
    }
};
