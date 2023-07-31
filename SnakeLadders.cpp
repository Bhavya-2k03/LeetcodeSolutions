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
    }

    void shortestdistance(t srcnode)
    {
        queue<t> q;
        unordered_map<t,bool> visited;
        unordered_map<t,t> parent;
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
                        q.push(i);
                        parent[i]=q.front();
                    }
                }
                if(q.front()==36 )
                {
                    cout<<"Shortest distance from node: "<<q.front()<<" is "<<level<<endl;
                    int temp=q.front();
                    cout<<temp<<" ";
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
    int board[50]={0};
    board[2]= 13;
    board[5]= 2;   
    board[9]= 18;
    board[18]= 11;
    board[17]= -13;   
    board[20]= -14; 
    board[24]= -8; 
    board[25]= 10;
    board[32]= -2;
    board[34]= -22;  

    graph<int> g;

    for (int i = 1; i < 36; i++)
    {
        int dice=1;
        while(dice<7)
        {
            int temp=i+dice;
            temp+=board[temp];
            if(temp<37) g.addEdge(i,temp);
            dice++;
        }
    }

    g.shortestdistance(1);   

return 0;
}