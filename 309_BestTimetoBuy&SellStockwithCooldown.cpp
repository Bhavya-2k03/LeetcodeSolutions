#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int solve(vector<int> &prices, vector<vector<int>> &dp, int flag, int index)
    {
        if(index>=prices.size()) return 0;
        if(dp[index][flag]!=-1) return dp[index][flag];
        if(!flag) //khareedna is allowed;
        {
            int buy=0-prices[index]+solve(prices,dp,!flag,index+1);
            int notbuy=solve(prices,dp,flag,index+1);
            return dp[index][flag]=max(buy,notbuy);
        }
            int sell=prices[index]+solve(prices,dp,!flag,index+2);
            int notsell=solve(prices,dp,flag,index+1);
            return dp[index][flag]=max(sell,notsell);

    }   
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size()+1,vector<int> (2,-1));
        return solve(prices,dp,0,0);

    }
};
int main()
{
    









return 0;
}