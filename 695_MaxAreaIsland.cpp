#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int dfs(vector<vector<int>> &grid, vector<vector<bool>> &visited, int i , int j)
    {
        if(i<0 || j<0 || i==grid.size() || j==grid[0].size() || !grid[i][j] || visited[i][j]) return 0;
        visited[i][j]=true;
        int left=dfs(grid,visited,i,j-1);
        int right=dfs(grid,visited,i,j+1);
        int top=dfs(grid,visited,i-1,j);
        int down=dfs(grid,visited,i+1,j);
        return 1+left+right+top+down;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        vector<vector<bool>> visited(grid.size(),(vector<bool> (grid[0].size(),0)));
        int area=0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if(visited[i][j] || !grid[i][j]) continue;
                area=max(area,dfs(grid,visited,i,j));
            }
        }
        return area;
    }
};
int main()
{
    









return 0;
}