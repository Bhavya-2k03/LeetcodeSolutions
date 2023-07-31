#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void dfs(vector<vector<char>>& grid,vector<vector<bool>> &visited, int i, int j)
    {
        if(i==grid.size() || i<0 || j==grid[0].size() || j<0 || visited[i][j] || !(grid[i][j]-'0')) return;
        visited[i][j]=true;
        dfs(grid, visited,i+1,j);
        dfs(grid, visited,i-1,j);
        dfs(grid, visited,i,j+1);
        dfs(grid, visited,i,j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>> visited(grid.size(),vector<bool> (grid[0].size(),0));
        int count=0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if(visited[i][j]) continue;
                dfs(grid,visited,i,j);
                count++;
            }
        }
        return count;
    }
};
int main()
{
    









return 0;
}