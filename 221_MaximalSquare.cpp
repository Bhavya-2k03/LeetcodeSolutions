#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int ans=0;
    int solve(vector<vector<int>> &dp,vector<vector<char>>& matrix, int row, int col)
    {
        if(row==matrix.size()||col==matrix[0].size()) return 0;
        if(dp[row][col]!=-1) return dp[row][col];
         
        int diag=solve(dp,matrix,row+1,col+1);
        int right=solve(dp,matrix,row,col+1);
        int down=solve(dp,matrix,row+1,col);

        if(matrix[row][col]=='0') return 0;
        dp[row][col]=1+min(diag,min(right,down));
        ans=max(ans,dp[row][col]);
        
        return dp[row][col];
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        vector<vector<int>> dp(matrix.size()+1, vector<int> (matrix[0].size()+1,-1));
        solve(dp,matrix,0,0);
        return ans*ans;

    }
};
int main()
{
    









return 0;
}