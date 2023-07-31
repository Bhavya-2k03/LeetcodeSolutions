#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int solve(int n, vector<int> &dp)
    {
        if(n==2) return 2;
        if(n==3) return 3;
        if(n<2) return 1;
        if(dp[n]) return dp[n];
        
        for(int i=1;i<n;i++)
        dp[n]=max(dp[n],i*solve(n-i,dp));

        return dp[n];
    }
    int integerBreak(int n) {
        if(n==2) return 1;
        if(n==3) return 2;
        vector<int> dp(n+1,0);
        return solve(n,dp);
    }
};
int main()
{
    









return 0;
}