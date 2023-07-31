#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool solve(vector<int>&piles,int left, int right,int flag,int sum1, int sum2, vector<vector<int>> &dp)
    {
        if(left>right)
        {
            if(sum1>sum2) return true;
            else return false;
        }
        if(dp[left][sum1]!=-1) return dp[left][sum1];
        if(!flag)
        {
            return dp[left][sum1]=solve(piles,left+1,right,!flag,sum1+piles[left],sum2,dp)||solve(piles,left,right-1,!flag,sum1+piles[right],sum2,dp);
            
        }
            return dp[left][sum1]=solve(piles,left+1,right,!flag,sum1,sum2+piles[left],dp)||solve(piles,left,right-1,!flag,sum1,sum2+piles[right],dp);
        
    }
    bool stoneGame(vector<int>& piles) {
        int sum=0;
        for(auto i:piles) sum+=i;

        vector<vector<int>> dp(piles.size(),vector<int> (sum+1,-1));
        return solve(piles,0,piles.size()-1,0,0,0,dp);

    }
};
int main()
{
    









return 0;
}