#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int solve(vector<vector<int>> &dp, string &s, int left, int right)
    {
        if(left==right) return 1;
        if(left >right) return 0;
        if(dp[left][right]!=-1) return dp[left][right];
        if(s[left]==s[right]) return dp[left][right]=2+solve(dp,s,left+1,right-1); 
        return dp[left][right]=max(solve(dp,s,left,right-1),solve(dp,s,left+1,right));

    }
    int longestPalindromeSubseq(string s) {
        vector<vector<int>> dp(s.size(),vector<int>(s.size(),-1));
        return solve(dp,s,0,s.size()-1);
    }
};
int main()
{
    









return 0;
}