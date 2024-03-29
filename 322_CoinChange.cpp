#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:

    int coinChange(vector<int>& coins, int amount) {
        if(!amount) return amount;
        sort(coins.begin(),coins.end());
        vector<int> dp(amount+1,INT_MAX);
        dp[0]=0;
        for (int i = 1; i < amount+1; i++)
        {
            for(int coin:coins)
            {
                if(i-coin<0) break;
                if(dp[i-coin]!=INT_MAX) dp[i]=min(dp[i],dp[i-coin]+1);
            }
        }

        return dp[amount]!=INT_MAX ? dp[amount]:-1; 
    }
};
int main()
{
    









return 0;
}