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

    void shortestdistance(t srcnode, t target)
    {
        queue<t> q;
        unordered_map<t,bool> visited;
        unordered_map<t,t> parent; //For mapping each visited node with its parent 
        q.push(srcnode);
        visited[srcnode]=true;
        int level=-1;
        while(!q.empty())
        {
            int size=q.size();
            level++;
            while(size!=0)
            {   
                for(auto i:g[q.front()])
                {
                    if(!visited[i]) 
                    {
                        visited[i]=true;
                        parent[i]=q.front(); //map each visited node with its parent i.e q.front()
                        q.push(i);
                    }
                }
                if(q.front()==target)
                {
                    cout<<"Shortest distance of "<<srcnode<<" from "<<q.front()<<" is "<<level<<endl;
                    int temp=q.front();
                    cout<<"Shortest path: "<<temp<<" ";
                    while(temp!=srcnode)
                    {
                        cout<<parent[temp]<<" ";
                        temp=parent[temp];
                    }
                }
                q.pop();
                size--;
            }
        }
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
    
    g.shortestdistance(0,5);




 


return 0;
}