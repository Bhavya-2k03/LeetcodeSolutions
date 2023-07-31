#include<iostream>
#include<list>
using namespace std;
class graph{
    list<int> *l;
    int V;

public:
    graph(){
    list<int>* l;
    int V;
    }
    void addEdge(int x, int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void isTree()
    {
        
    }
};  
int main()
{
    









return 0;
}