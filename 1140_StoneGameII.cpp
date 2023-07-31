#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int solve(vector<int> &nums,vector<vector<int>> &dp, int flag, int index,int limit_ind)
    {
        if(index==nums.size()) return 0;
        if(dp[index][flag]!=-1) return dp[index][flag];
        if(!flag) //if alice ki baari
        {
            int n=min(limit_ind, (int)nums.size()-1);
            int ans=0;
            for (int i = index; i <= n; i++)
            {
                ans=max(ans,nums[i]+solve(nums,dp,!flag, i+1, i+2*(i-index+1)));
            }
            return dp[index][flag]=ans;
        }
            int n=min(limit_ind, (int)nums.size()-1);
            int ans=0;
            for (int i = index; i <= n; i++)
            {
                ans=max(ans,solve(nums,dp,!flag, i+1, i+2*(i-index+1)));
            }
            return dp[index][flag]=ans;
    }
    int stoneGameII(vector<int>& piles) {
        vector<vector<int>> dp(piles.size(), vector<int>(2,-1));
        return solve(piles,dp,0,0,1);

    }
};
int main()
{
    









return 0;
}