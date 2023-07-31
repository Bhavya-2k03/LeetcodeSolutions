#include<iostream>
#include<list>
using namespace std;
class Graph
{
    int V;
    list<int> *ptr;

public:
    Graph(int V)
    {
        this->V=V;
        ptr= new list<int>[V];
    }
    void addEdge(int x, int y)
    {
        ptr[x].push_back(y);
        ptr[y].push_back(x);
    }

    void printAdjencyList()
    {
        for(int i=0;i<V;i++)
        {
            cout<<"Neighbours of Vertex "<<i<<": ";
            for(auto nbr: ptr[i]) cout<<nbr<<" ";
            cout<<endl;
        }
    }
};

int main()
{
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(3,2);

    g.printAdjencyList();


return 0;
}