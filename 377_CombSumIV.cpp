#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int count=0;
    int solve(vector<int>& nums, vector<int> &dp, int target)
    {
        if(target==0)  return 1;

        if(dp[target]!=-1) return dp[target];

        dp[target]=0;

        for(auto i:nums) if(i<target) dp[target]+=solve(nums,dp,target-i);

        return dp[target];
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target+1, -1);
        return solve(nums,dp,target);
    }
};
int main()
{
    









return 0;
}