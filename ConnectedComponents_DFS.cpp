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
    void dfs(t srcnode, unordered_map<t,bool> &visited)
    {
        if(visited[srcnode]) return;
        else visited[srcnode]=true; 
        for(auto i:g[srcnode])
        {
            dfs(i,visited);
        }
    }
    void countComponents()
    {
        int count=0;
        unordered_map<t, bool> visited;
        for (auto i = g.begin(); i !=g.end(); i++)
        {
            if(visited[i->first]) continue;
            dfs(i->first,visited);
            count++;
        }
        cout<<"Total number of connected components in the given graph: "<<count;
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

    g.addEdge(7,8);
    g.addEdge(9,8);
    g.addEdge(9,14);
    g.addEdge(7,15);

    
    g.countComponents();
    // g.shortestdistance(0,5);




 


return 0;
}