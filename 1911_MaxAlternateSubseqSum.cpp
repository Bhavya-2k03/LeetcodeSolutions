#include<iostream>
#include<vector>
using namespace std;
#define ll long long
class Solution {
public:
    ll solve(vector<vector<ll>> &dp,vector<int>& nums,int index,int flag)
    {
        if(index==nums.size()) return 0;
        if(dp[index][flag]!=-1) return dp[index][flag];
        if(!flag) //positive wale
        {
            ll take=(ll)nums[index]+solve(dp,nums,index+1,!flag);
            ll donttake=solve(dp,nums,index+1,flag);
            return dp[index][flag]=max(take,donttake);
        }
            ll take=0-(ll)nums[index]+solve(dp,nums,index+1,!flag);
            ll donttake=solve(dp,nums,index+1,flag);
            return dp[index][flag]=max(take,donttake);
    }

    long long maxAlternatingSum(vector<int>& nums) {
        vector<vector<ll>> dp(nums.size(),vector<ll>(2,-1));
        return solve(dp,nums,0,0);

    }
};
int main()
{
    









return 0;
}