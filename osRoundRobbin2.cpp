#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;

int count=0;
vector<pair<int,int>> OrginalExeTime;

bool comp(pair<int,pair<int,int>> a, pair<int,pair<int,int>> b)
{
    return a.second.first<b.second.first;
}

bool isequaltocount(pair<int,pair<int,int>> a)
{
    return a.second.first==::count;
}

// bool forfind(int a)
// {
//     // return a.first==
//     // return ::OrginalExeTime
// }

int main()
{
    int process;

    cout<<"Enter the number of processes: "<<endl;
    cin>>process;

    vector<pair<int,pair<int,int>>> vec;
    vector<pair<int,int>> waitTime;
    unordered_map<int,int> execu;
    
    cout<<"Enter the arrival and CPU time: "<<endl;
    for (int i = 0; i < process; i++)
    {
        int arr,cpu;
        cin>>arr>>cpu;
        vec.push_back({i+1,{arr,cpu}});
        // OrginalExeTime.push_back({i+1,cpu});
    }
    
    sort(vec.begin(),vec.end(),comp);
    for (auto it: vec)
    {
        execu[it.first]=it.second.second;
    }
    

    int flag=0;
    int flagforsame=0;
    int flag2=0;
    int samecount=0;
    queue<vector<pair<int,pair<int,int>>>:: iterator> q;
    
    while(flag!=process)
    {   
        vector<pair<int,pair<int,int>>>:: iterator itr= find_if(vec.begin(),vec.end(),isequaltocount);
            
        if(itr!=vec.end() && flagforsame==0)
        {   
            cout<<"mujhe mila "<<itr->first<<endl;
            q.push(itr);

            // int index=itr-vec.begin();
            
            // while (flag2==0)
            // {
                
            //     vector<pair<int,pair<int,int>>>:: iterator it=vec.begin()+index+1;
            //     it=find_if(it,vec.end(),isequaltocount);
            //     if(it==vec.end())
            //     {
            //         flag2=1;
            //         break;
            //     }
            //     q.push(it);
            //     index=it-vec.begin();
            //     samecount++;
            //     // cout<<"mila "<<it->first<<endl;
            // }
            // cout<<"samecount is "<<samecount<<endl;
            
        }

        else if(q.empty())
        {
            cout<<"No process is being executed at time= "<<::count<<endl;
            ::count++;
            flag2=0;
            // if (::count>20)
            // break;
            // continue;
        }

        cout<<"Process "<<q.front()->first<<" is being executed at time= "<<::count<<endl;

        q.front()->second.second--;
        if(q.front()->second.second==0)
        {   
            // find(OrginalExeTime.begin(),OrginalExeTime.end(),forfind(q.front()->first));
            int temp3=execu[q.front()->first];
            waitTime.push_back({q.front()->first,::count-q.front()->second.first+1-temp3});
            flagforsame=0;
            q.pop();
            flag++;
            ::count++;
            flag2=0;
            continue;
        }

        auto tempItr=q.front();
        q.pop();
        ::count++;
        flagforsame=0;
        flag2=0;

        // vector<pair<int,pair<int,int>>>:: iterator itr2= find_if(vec.begin(),vec.end(),isequaltocount);
        // if(itr2!=vec.end())
        // {
        //     q.push(itr2);
        //     flagforsame=1;
        // }
        q.push(tempItr);
    };


sort(waitTime.begin(),waitTime.end());
for (auto itr:waitTime)
{
    cout<<"Process: "<<itr.first<<" Wait time: "<<itr.second<<endl;
}

return 0;
}
