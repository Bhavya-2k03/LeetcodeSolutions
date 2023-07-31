#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int solve(vector<int> &nums,int curr_i,int prev_i, vector<vector<int>> &dp)
    {
        if(curr_i=nums.size()) return 0;
        if(dp[prev_i][curr_i]!=-1) return dp[prev_i][curr_i];
        int take=0;
        if(prev_i==-1||nums[curr_i]>nums[prev_i]) take=1+solve(nums,curr_i+1,curr_i,dp);
        int dontake=solve(nums,curr_i+1,prev_i,dp);
        return dp[prev_i][curr_i]=max(take,dontake);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int> (n+1,-1));
        return solve(nums,0,-1,dp);
    }
};

int main()
{
    









return 0;
}