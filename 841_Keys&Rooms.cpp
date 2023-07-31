#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        if(rooms.empty()) return true;
        queue<int> q;
        vector<int> visited(rooms.size(),0);
        q.push(0);
        visited[0]=1;
        while(!q.empty())
        {
            for(auto i:rooms[q.front()])
            {
                if(!visited[i])
                {
                    q.push(i);
                    visited[i]=1;
                }
            }
            q.pop();
            
        }

        for(auto i:visited) if(!i) return false;
        return true;




    } 
};
int main()
{
    









return 0;
}