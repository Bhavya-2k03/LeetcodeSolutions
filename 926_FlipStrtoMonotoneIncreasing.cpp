#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int solve(vector<vector<int>> &dp, string s, int prev, int index)
    {
        if(index==s.size()) return 0;
        if(dp[index][prev+1]!=-1) return dp[index][prev+1];
        if(!prev || prev==-1) //pichla zero hain
        {
            if(s[index]=='1')
            {
                return dp[index][prev+1]=min(1+solve(dp,s,0,index+1),solve(dp,s,1,index+1));
            }
            else
                return dp[index][prev+1]=min(1+solve(dp,s,1,index+1),solve(dp,s,0,index+1));
        }
            if(s[index]=='0')
            {
                return dp[index][prev+1]=1+solve(dp,s,1,index+1);
            }
                return dp[index][prev+1]=solve(dp,s,1,index+1);


    }
    int minFlipsMonoIncr(string s) {
        vector<vector<int>> dp(s.size(),vector<int> (3,-1));
        return solve(dp,s,-1,0);

    }
};
int main()
{
    









return 0;
}