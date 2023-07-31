#include<iostream>
#include<unordered_map>
#include<list>
#include<deque>
#include<string>
using namespace std;
template <typename t>
class graph
{
    unordered_map<t,list<t>> l;
public:
    void addEdge(t x, t y)
    {
        l[x].push_back(y);
    }
    void dfs(t srcnode, deque<t> &q,unordered_map<t,bool> &visited)
    {
        if(visited[srcnode]) return;
        visited[srcnode]=true;
        for(auto i: l[srcnode])
        {
            dfs(i,q,visited);
        }
        q.push_front(srcnode);
    }

    void topologicalOrder()
    {
        unordered_map<t,bool> visited; 
        deque<t>q;
        for (auto i = l.begin(); i != l.end(); i++)
        {
            if(visited[i->first]) continue;
            dfs(i->first,q,visited);
        }
        while(!q.empty())
        {
            cout<<q.front()<<" ";
            q.pop_front();
        }
    }
};
int main()
{
    
    graph<string> g;
    g.addEdge("Python" , "Datapreprocessing");
    g.addEdge("Python" , "Pytorch");
    g.addEdge("Python" , "ML");
    g.addEdge("Datapreprocessing" , "ML");
    g.addEdge("Pytorch" , "DL");
    g.addEdge("ML" , "DL");
    g.addEdge("DL" , "FaceRecogn");
    g.addEdge("DataSet" , "FaceRecogn");

    g.topologicalOrder();









return 0;
}