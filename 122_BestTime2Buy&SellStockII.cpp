#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int solve(vector<int>&nums,vector<vector<int>> &dp, int index, int flag)
    {
        if(index==nums.size()) return 0;
        if(dp[index][flag]!=-1) return dp[index][flag];
        if(!flag) //khareedna is allowed
        {
            int buy=0-nums[index]+solve(nums,dp,index+1,!flag);
            int notbuy=solve(nums,dp,index+1,flag);
            return dp[index][flag]=max(buy,notbuy);
        }
            int sell=nums[index]+solve(nums,dp,index+1,!flag);
            int notsell=solve(nums,dp,index+1,flag);
            return dp[index][flag]=max(sell,notsell);

    } 
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size(),vector<int>(2,-1));
        return max(0,solve(prices,dp,0,0));
    }
};
int main()
{
    









return 0;
}