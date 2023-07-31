#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int solve(int i, int j, vector<vector<int>> &dp,string &s)
    {
        if(i>=j) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==s[j]) return dp[i][j]=solve(i+1,j-1,dp,s);
        else return dp[i][j]==0;
    }

    int countSubstrings(string s) {
        vector<vector<int>> dp(s.size(),vector<int> (s.size(),-1));
        int count=0;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i; j < s.size(); j++)
            {
                count+=solve(i,j,dp,s);
            }   
        }
        return count;
    }
};
int main()
{
    




return 0;
}