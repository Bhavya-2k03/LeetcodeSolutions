#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int solve(int n, vector<int> &dp )
    {
        if(n<=2) return n;

        if(dp[n]) return dp[n];
        else return dp[n]=solve(n-1,dp)+solve(n-2,dp);
    }

    int climbStairs(int n) {
        vector<int> dp(n+1,0);
        return solve(n,dp);
    }
}; 
int main()
{   
    









return 0;
}