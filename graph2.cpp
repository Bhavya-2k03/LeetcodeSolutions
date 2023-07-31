#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;
class graph
{
    int V;
    unordered_map<string,list<pair<string,int>>> m;
    public:
    void addedge(string x, string y, bool bidir, int weight)
    {
        m[x].push_back(make_pair(y,weight));
        if(bidir) m[y].push_back((make_pair(x,weight)));
    }
    void printGraph()
    {
        for(auto i=m.begin(); i!=m.end(); i++)
        {
            cout<<"Neghbours of "<<i->first<<" are: "<<endl;
            for(auto y: i->second) cout<<y.first<<", "<<"Weight: "<<y.second<<endl;
        }
    }
};
int main()
{
    graph g;
    g.addedge("M","N",true,23);
    g.addedge("M","O",false,56);
    g.addedge("O","N",true,19);
    g.addedge("N","N",false,8);
    g.printGraph();









return 0;
}