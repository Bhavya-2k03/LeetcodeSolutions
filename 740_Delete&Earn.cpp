#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int solve(vector<int> &nums, vector<int> &dp, int index)
    {
        if(index>=nums.size()) return 0;
        if(dp[index]!=-1) return dp[index];
        if(nums[index]==0) return dp[index]=solve(nums,dp,index+1);
        
        int take=nums[index]+solve(nums,dp,index+2);
        int dontake=solve(nums,dp,index+1);
        return dp[index]=max(take,dontake);
    }

    int deleteAndEarn(vector<int>& nums) {
        vector<int> vec(10001,0), dp(10001,-1);
        for(auto i:nums) vec[i]+=i;
        return solve(nums,dp,0);

    }
};
int main()
{
    









return 0;
}