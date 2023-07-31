#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int solve(vector<vector<int>> &dp, vector<int> &coins, int index, int sum)
    {
        if(!sum) return 1;
        if(sum<0 || index==coins.size()) return 0;
        if(dp[sum][index]!=-1) return dp[sum][index];
        int take=solve(dp,coins,index,sum-coins[index]);
        int dontake=solve(dp,coins,index+1,sum);
        return dp[sum][index]=take+dontake;

    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(amount+1,vector<int> (coins.size(),-1));
        return solve(dp,coins,0,amount);

    }
};
int main()
{
    









return 0;
}