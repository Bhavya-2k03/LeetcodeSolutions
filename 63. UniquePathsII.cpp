#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int solve(vector<vector<int>>& obstacleGrid,vector<vector<int>> &dp,int &m, int &n,int row, int coloumn)
    {
        if(row>=m || coloumn>=n || obstacleGrid[row][coloumn]) return 0;
        if(row==m-1 && coloumn==n-1) return 1;
        if(dp[row][coloumn]!=-1) return dp[row][coloumn];
        int rightmove=solve(obstacleGrid,dp,m,n,row,coloumn+1);
        int downmove=solve(obstacleGrid,dp,m,n,row+1,coloumn);
        return dp[row][coloumn]=rightmove+downmove;

    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(), n=obstacleGrid[0].size();
        vector<vector<int>> dp(m,vector<int> (n,-1));
        return solve(obstacleGrid,dp,m,n,0,0);

    }
};
int main()
{
    









return 0;
}