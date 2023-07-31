#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int solve(vector<int> &nums, vector<int> &dp, int n)
    {
        if(n<0) return 0;
        if(n<2) return nums[n];
        if(dp[n]!=-1) return dp[n];
        else return dp[n]=nums[n]+max(solve(nums, dp, n-2),solve(nums,dp, n-3));

    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return max(solve(nums,dp,nums.size()-1),solve(nums,dp,nums.size()-2));
    }
};
int main()
{
    









return 0;
}