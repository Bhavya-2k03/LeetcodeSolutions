#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int Nprocess;
    int Nresources=0;

    cout<<"Enter the number of processes ";
    cin>>Nprocess;

    vector<vector<int>> adj(Nprocess ,vector<int> (Nprocess,0));

    cout<<"Enter the adjacency matrix "<<endl;
    for (int i=0;i<Nprocess;i++)
    {
        for (int j=0;j<Nprocess;j++)
        {
            cin>>adj[i][j];
            if (adj[i][j]) Nresources++;
        }  
    }

    int total=Nprocess+Nresources;
    vector<vector<int>> RAG(total,vector<int>(total,0));
    int x=0; 
  
    for (int i=0;i<Nprocess;i++) {
        for (int j=0;j<Nprocess;j++){
            if (adj[i][j])
            { 
                RAG[i][Nprocess+x]=1; 
                RAG[Nprocess+x][j]=1; 
                x++;
            }
        }
    }
    vector<string> names;

    for (int i=0;i<Nprocess;i++)
    {
        string str="p";
        str.push_back(i+'1');
        names.push_back(str);
    }
    for (int i=0;i<Nresources;i++){
        string str="r";
        str.push_back(i+'1');
        names.push_back(str);
    }

    cout<<"       RAG Matrix    "<<endl;
    cout<<"    ";
    
    for (string i:names) cout<<i<<"  ";
    cout<<endl;
    
    for (int i=1;i<=total;i++)
    {
        for (int j=0;j<=total;j++)
        {
            if (j==0) 
            {
                cout<<names[i-1]<<"   ";
                continue;
            }
            cout<<RAG[i-1][j-1]<<"   ";
        }
        cout<<endl;
    }
    
}