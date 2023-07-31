#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int solve(vector<pair<int,int>>& nums,vector<vector<int>> &dp, int prev_ind, int curr_ind)
    {
        if(curr_ind==nums.size()) return 0;
        if(dp[prev_ind+1][curr_ind]!=-1) return dp[prev_ind+1][curr_ind];

        int dontake=solve(nums,dp,prev_ind,curr_ind+1);
        if(prev_ind !=-1 && nums[prev_ind].second<nums[curr_ind].second && nums[prev_ind].first!=nums[curr_ind].first) 
        return dp[prev_ind+1][curr_ind]= dontake;

        int take=nums[curr_ind].second+solve(nums,dp,curr_ind,curr_ind+1);
        
        return dp[prev_ind+1][curr_ind]=max(take,dontake);

    }
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<vector<int>> dp(scores.size(),vector<int> (scores.size(),-1));
        vector<pair<int,int>> vec;
        for (int i = 0; i < scores.size(); i++)
        {
            vec.push_back({ages[i],scores[i]});
        }
        sort(vec.rbegin(),vec.rend());
        return solve(vec,dp,-1,0);
    }
};
int main()
{
    









return 0;
}