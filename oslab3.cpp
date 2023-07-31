#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> sort (vector<int> x, int n)
{



}

int sum(vector<int> &x,int y)
{
    int a=0;
        for (int i = 0; i <= y; i++)
        {
            a=x[i]+a;
        }
        
    return a;
}


int main()
{
    
    vector<int> exeTime={5,3,2};

    vector<pair<int,int>>vect;

    // for()
    map<int,int>ans;
    int arrTime[3];
    int waitTime[3];
    cout<<"Enter the Arrival time of each program"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cin>>arrTime[i];
        // ans.insert({arrTime[i],waitTime[i]});
        
        vect.push_back(make_pair(arrTime[i],exeTime[i]));
    
    }

    for (int i = 0; i < vect.size()-1; i++)
    {
        if(vect[i].first==vect[i+1].first)
        {
            if(vect[i].second<vect[i+1].second)
            {
                cout<<i<<" will be executed first";


            }
        };
    }
    




    // for()

        for (auto i: ans)
        {

        }
        
    // }
    


    // waitTime[0]=arrTime[0];
    for (int i = 0; i < 3; i++)
    {
        waitTime[i]=sum(exeTime,i)-arrTime[i];
        // waitTime
    }
    
    for (int i = 0; i < 3; i++)
    {
        cout<<waitTime[i]<<endl;
    }








return 0;
}