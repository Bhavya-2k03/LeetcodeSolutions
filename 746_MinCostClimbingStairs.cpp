#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int solve(vector<int> & cost, int n, vector<int> &dp)
    {
        if(n<2) 
        {
            return cost[n];
        }
        if(dp[n]==-1) 
        {
            dp[n] =min(solve(cost,n-1,dp),solve(cost,n-2,dp));
            if(n==cost.size()) return dp[n];
        }
        return dp[n]+cost[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1,-1);
        return solve(cost,cost.size(),dp);

    }
};
int main()
{
    









return 0;
}