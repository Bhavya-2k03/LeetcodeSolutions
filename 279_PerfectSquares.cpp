#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
class Solution {
public:
    int maxval;
    int solve(vector<int> &dp, int target, int val )
    {
        if(!target) return 0;
        
        else if (target<0|| val>maxval) return INT_MAX-1;

        if(dp[target]!=-1) return dp[target];

        // return dp[target]=min(1+solve(nums,dp,target-nums[index],index),solve(nums,dp,target,index+1));
        return dp[target]=min(1+solve(dp,target-pow(val,2),val),solve(dp,target,val+1));
    }
    int numSquares(int n) {
        int i=sqrt(n);
        if(i*i==n) return 1; //If the given number is perfect square; return 1 (common sense)
        maxval=i;
        vector<int> dp(n+1,-1);
        // vector<int> nums;
        // for (int x = 1; x <=i ; x++) nums.push_back(x*x);
        // return solve(nums,dp,n,0);
        return solve(dp,n,1);
    }
};
int main()
{
    









return 0;
}