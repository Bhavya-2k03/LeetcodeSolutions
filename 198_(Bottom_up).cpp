#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int solve(vector<int>& nums, vector<int> &dp, int &flag, int n)
    {
        if(n<2)
        {
            if(!flag) 
            {
                if(n==0) return 0;
                else return nums[n];
            }
            else return nums[n];
        }
        if(!dp[n]==-1) dp[n]=nums[n]+max(solve(nums,dp,flag,n-2), solve(nums,dp,flag,n-3));

        return dp[n];

    }
    int rob(vector<int>& nums) {
        vector<int> dp1(nums.size()+1,-1);
        vector<int> dp2(nums.size()+1,-1);
        int flag1=0, flag2=1;
        int a=solve(nums,dp1,flag1,nums.size()-1);
        int b=solve(nums,dp2,flag2,nums.size()-1);

        return max(a,b);


    }
};
int main()
{
    






return 0;
}