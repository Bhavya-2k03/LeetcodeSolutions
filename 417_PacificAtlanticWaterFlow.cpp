#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int solve(vector<vector<int>>& heights,vector<vector<int>>&dp, int i, int j, int prev, vector<vector<int>> &ans)
    {
        if(i<0 || j<0) return 1; 
        if(i==heights.size() || j==heights[0].size()) return 0;
        if(heights[i][j]>prev) return -1; 
        if(dp[i][j]!=-2) return dp[i][j];

        int up=solve(heights,dp,i-1,j,heights[i][j],ans);
        int down=solve(heights,dp,i+1,j,heights[i][j],ans);
        int left=solve(heights,dp,i,j-1,heights[i][j],ans);
        int right=solve(heights,dp,i,j+1,heights[i][j],ans);
        
        vector<int>vec;
        vec.push_back(up);
        vec.push_back(down);
        vec.push_back(left);
        vec.push_back(right);
        int count=0;
        int count0=0;  
        for(auto i:vec)
        {
            if(i==1) count++;
            else if(i==0) count0++;
            else if(i==2)
            {
                ans.push_back({i,j});
                return dp[i][j]=2;
            }
        }
        
        if(count>0 && count0>0) 
        {
            ans.push_back({i,j});
            return dp[i][j]=2;

        } 
        return dp[i][j]=-1;
        // if(up==0||up==1)


    }


    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>> dp(heights.size(),(vector<int> (heights[0].size(),-2)));
        vector<vector<int>> ans;
        for (int i = 0; i < heights.size(); i++)
        {
            for (int j = 0; j < heights[0].size(); j++)
            {
                solve(heights,dp,i,j,-1,ans);
            }
            
        }
        return ans;


    }
};
int main()
{
    









return 0;
}