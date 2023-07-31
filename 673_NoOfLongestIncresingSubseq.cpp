#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    pair<int,int> solve(vector<int> &nums,vector<pair<int,int>>& dp, int prev_ind, int curr_ind)
    {
        if(curr_ind==nums.size()) return make_pair(0,1);
        if(dp[curr_ind]!=make_pair(-1,-1)) return dp[curr_ind];
        pair<int,int> take=make_pair(0,0) , dontake;
        if(prev_ind==-1 || nums[curr_ind]>nums[prev_ind])
        {
            take=solve(nums,dp,curr_ind,curr_ind+1);
            take.first++;
        }
        dontake=solve(nums,dp,prev_ind,curr_ind+1);
        if(take.first==dontake.first) return dp[curr_ind]=make_pair(take.first,take.second+dontake.second);
        else if(take.first>dontake.first) return dp[curr_ind]=take;
        else return dp[curr_ind] =dontake;

    }
    int findNumberOfLIS(vector<int>& nums) {
        vector<pair<int,int>> dp(nums.size()+1,make_pair(-1,-1));
        return solve(nums,dp,-1,0).second;


    }
};
int main()
{
    









return 0;
}