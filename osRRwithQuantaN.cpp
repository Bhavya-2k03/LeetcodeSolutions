#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;

int count=0;
int x=0;
vector<pair<int,int>> OrginalExeTime;

bool comp(pair<int,pair<int,int>> a, pair<int,pair<int,int>> b)
{
    return a.second.first<b.second.first;
}

bool isequaltocount(pair<int,pair<int,int>> a)
{
    return a.second.first==::count;
}

bool isequaltoi(pair<int,pair<int,int>> a)
{
    return a.second.first==::x;
}




int main()
{
    int process;
    int quanta;

    cout<<"Enter the number of processes: "<<endl;
    cin>>process;

    cout<<"Enter quanta: "<<endl;
    cin>>quanta;

    vector<pair<int,pair<int,int>>> vec;
    vector<pair<int,int>> waitTime;
    unordered_map<int,int> execu;
    
    cout<<"Enter the arrival and CPU time: "<<endl;
    for (int i = 0; i < process; i++)
    {
        int arr,cpu;
        cin>>arr>>cpu;
        vec.push_back({i+1,{arr,cpu}});
    }
    
    sort(vec.begin(),vec.end(),comp);

    for (auto it: vec)
    {
        execu[it.first]=it.second.second;
    }
    
    int flag=0;
    int flag2=0;
    int flag3=0;
    int flagforpush=0;
    int tempcount=0;
    vector<pair<int,pair<int,int>>>:: iterator tempItr;
    queue<vector<pair<int,pair<int,int>>>:: iterator> q;
    
    while(flag!=process)
    {   
        if(::count==tempcount)
        {
            vector<pair<int,pair<int,int>>>:: iterator itr= find_if(vec.begin(),vec.end(),isequaltocount);
            if(itr!=vec.end())
            {   
                q.push(itr);
                int index=itr-vec.begin();
                
                while (flag2==0)
                {
                    vector<pair<int,pair<int,int>>>:: iterator it=vec.begin()+index+1;
                    it=find_if(it,vec.end(),isequaltocount);
                    if(it==vec.end())
                    {
                        flag2=1;
                        break;
                    }
                    q.push(it);
                    index=it-vec.begin();    
                }
            }
        }    
        else
        {
            for (int i =::count; i <= tempcount; i++)
            {
                // cout<<"hello"<<endl;
                ::x=i;
                vector<pair<int,pair<int,int>>>:: iterator itr= find_if(vec.begin(),vec.end(),isequaltoi);
                if (itr!=vec.end())
                {
                    // cout<<"currently founded process "<<itr->first<<endl;
                    q.push(itr);
                    int index=itr-vec.begin();

                    while (flag3==0)
                    {
                        vector<pair<int,pair<int,int>>>:: iterator it=vec.begin()+index+1;
                        // cout<<"while ke andar "<<endl;
                        it=find_if(it,vec.end(),isequaltoi);
                        if(it==vec.end())
                        {
                            flag3=1;
                            break;
                        }
                        // cout<<"found process: "<<it->first<<endl;
                        q.push(it);  
                        index=it-vec.begin();   
                    }
                }
                flag3=0;
            }
            ::count=tempcount;
        };   
        
        if(flagforpush==1)
            q.push(tempItr);

        if(q.empty())
        {
            cout<<"No process is being executed at time= "<<::count<<endl;
            ::count++;
            tempcount++;
            flag2=0;
            flag3=0;
            // if (::count>20) 
            // break;
            continue;
        }

        // tempcount =::count+tempcount;
        for (int i = 0; i < quanta; i++)
        {
            cout<<"Process "<<q.front()->first<<" is being executed at time= "<<tempcount<<endl;
            q.front()->second.second--;
            if(q.front()->second.second==0)
            {   
                int temp3=execu[q.front()->first];
                waitTime.push_back({q.front()->first,tempcount-q.front()->second.first+1-temp3});
                q.pop();
                flag++;
                ::count++;
                tempcount++;
                // cout<<"Tempcount is "<<tempcount<<endl;
                flag2=0;
                flag3=0;
                flagforpush=0;
                goto nested_continue;
                // continue;
            }
            if(i==(quanta-1))
                continue;
            tempcount++;
        }

        tempItr=q.front();
        q.pop();
        ::count++;
        tempcount++;
        flagforpush=1;
        flag2=0;
        flag3=0;

        nested_continue:;
    };
 

    // sort(waitTime.begin(),waitTime.end());
    for (auto itr:waitTime)
    {
        cout<<"Process: "<<itr.first<<" Wait time: "<<itr.second<<endl;
    }

return 0;
}