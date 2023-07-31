#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2,vector<vector<bool>> &visited, int i, int j,int &res )
    {
        if(i<0 || i==grid1.size()|| j<0 || j==grid1[0].size()|| visited[i][j] || !grid2[i][j]) return;
        visited[i][j]=true;
        if(grid2[i][j]!=grid1[i][j]) 
        {
            res=0;
            return;
        }
        dfs(grid1,grid2,visited,i,j-1,res);
        dfs(grid1,grid2,visited,i,j+1,res);
        dfs(grid1,grid2,visited,i-1,j,res);
        dfs(grid1,grid2,visited,i+1,j,res);
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        vector<vector<bool>> visited(grid1.size(),vector<bool> (grid1[0].size(),0));
        int ans=0;
        for (int i = 0; i < grid1.size(); i++)
        {
            for (int j = 0; j < grid1[0].size(); j++)
            {
                int res=1;
                if(visited[i][j] || !grid2[i][j]) continue;
                dfs(grid1,grid2,visited,i,j,res);
                ans+=res;
            }
        }
        return ans;

    }
};
int main()
{
    









return 0;
}