#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int solve(int row, int coloumn,int &m, int &n, vector<vector<int>> dp)
    {
        if(row>=m || coloumn>=n) return 0;
        if(row==m-1 && coloumn==n-1) return 1;
        if(dp[row][coloumn]!=-1) return dp[row][coloumn];
        int rightmove=solve(row,coloumn+1,m,n,dp);
        int downmove=solve(row+1,coloumn,m,n,dp);
        return dp[row][coloumn]=rightmove+downmove;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int> (n+1,-1));
        return solve(0,0,m,n,dp);
    }
};
int main()
{
    









return 0;
}