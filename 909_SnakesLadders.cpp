#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n=board.size();
        vector<int> jump(n*n+1,0);
        int flag=1;
        int temp=1;
        for (int i = n-1; i >= 0; i--)
        {
            if(flag)
            {
                for (int j = 0; j < n; j++)
                {
                    if(board[i][j]!=-1) jump[temp]= board[i][j]-temp;
                    temp++;
                }
                flag=!flag;
            }
            else
            {
                for (int j = n-1; j >= 0; j--)
                {
                    if(board[i][j]!=-1) jump[temp]= board[i][j]-temp;
                    temp++;
                }
                flag=!flag;
            }   
        }

        queue<int> q;
        int ans=-1;
        int level=0;
        q.push(1);
        vector<bool> visited((n*n)+1,0);
        while(!q.empty())
        {
            int size=q.size();
            while(size!=0)
            {
                for(int dice = 1; dice <= 6; dice++)
                {
                    int temp=q.front()+dice;
                    if(temp>n*n) break;
                    temp+=jump[temp];
                    if(temp<=n*n && !visited[temp]) 
                    {
                        q.push(temp);
                        visited[temp]=1;
                    }
                }
                if(q.front()==n*n) return ans=level;
                q.pop();
                size--;
            }
            level++;
        }
    return ans;
    }
};
int main()
{
    









return 0;
}