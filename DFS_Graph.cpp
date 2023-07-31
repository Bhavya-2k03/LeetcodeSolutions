#include<iostream>
#include<queue>
#include<unordered_map>
#include<list>
using namespace std;
template<typename t>
class graph
{
    unordered_map<t,list<t>> g;
    public:
    void addEdge(t x, t y)
    {
        g[x].push_back(y);
        g[y].push_back(x);
    }
    void dfs_helper(t srcnode, unordered_map<t,bool> &visited)
    {
        if(visited[srcnode]) return;
        else visited[srcnode]=true; 
        cout<<srcnode<<" ";
        for(auto i:g[srcnode])
        {
            dfs_helper(i,visited);
        }
    }
    void dfs(t srcnode)
    {
        unordered_map<t, bool> visited;
        dfs_helper(srcnode,visited);
    }
};
int main()
{
    
    graph<int> g;
    g.addEdge(0,1);
    g.addEdge(0,3);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(1,2);
    
    g.dfs(2);
    // g.shortestdistance(0,5);




 


return 0;
}