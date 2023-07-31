#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int solve(vector<vector<int>> &dp,vector<vector<int>>& grid,int row, int coloumn)
    {
        if((row==grid.size() && coloumn==grid[0].size()-1) ||(row==grid.size()-1 && coloumn==grid[0].size())) return 0;
        if(row==grid.size()||coloumn==grid[0].size()) return INT_MAX-201;
        if(dp[row][coloumn]!=-1) return dp[row][coloumn];

        return dp[row][coloumn]=grid[row][coloumn]+min(solve(dp,grid,row,coloumn+1),solve(dp,grid,row+1,coloumn));

    }
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size(),vector<int>(grid[0].size(),-1));
        return solve(dp,grid,0,0);

    }
};
int main()
{
    









return 0;
}