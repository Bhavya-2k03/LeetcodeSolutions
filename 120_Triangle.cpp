#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int solve(vector<vector<int>>& nums, int ind, int sub_ind, vector<vector<int>> &dp)
    {
        if(ind==nums.size()) return 0;

        if(dp[ind][sub_ind]!=-1) return dp[ind][sub_ind];

        int firsttake=nums[ind][sub_ind]+solve(nums,ind+1,sub_ind,dp);
        int secondtake=INT_MAX;

        if(sub_ind+1<nums[ind].size())
        {
            secondtake=nums[ind][sub_ind+1]+solve(nums,ind+1,sub_ind+1,dp);
        }

        return dp[ind][sub_ind]=min(firsttake,secondtake);

    }
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp(triangle.size(),vector<int> (triangle[triangle.size()-1].size(),-1));  
        return solve(triangle,0,0,dp);      
    }
};
int main()
{
    









return 0;
}