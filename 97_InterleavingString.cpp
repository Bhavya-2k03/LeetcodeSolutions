#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool solve(string &s1, string &s2,string &s3, vector<vector<int>> &dp, int i, int j)
    {
        if(i==s1.size() && j==s2.size()) return true;
        if(dp[i][j]!=-1) return dp[i][j];

        if(i<s1.size() && s3[i+j]==s1[i])
        {
            if(solve(s1,s2,s3,dp,i+1,j)) return dp[i][j]=true;
        }
        if(j<s2.size() && s3[i+j]==s2[j])
        {
            if(solve(s1,s2,s3,dp,i,j+1)) return dp[i][j]=true;
        }
        return dp[i][j]=false;
    }
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.length()+s2.length()!=s3.length()) return false;
        vector<vector<int>> dp(s1.size()+1, vector<int>(s2.size()+1,-1));
        return solve(s1,s2,s3,dp,0,0);

    }
};
int main()
{
    









return 0;
}