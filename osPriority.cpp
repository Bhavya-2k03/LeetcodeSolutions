#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;

float count=0;
float x=0;
vector<pair<float,float>> OrginalExeTime;

bool comp(pair<float,pair<float,float>> a, pair<float,pair<float,float>> b)
{
    return a.second.first<b.second.first;
}

bool isequaltocount(pair<float,pair<float,float>> a)
{
    return a.second.first==::count;
}

bool isequaltoi(pair<float,pair<float,float>> a)
{
    return a.second.first==::x;
}




int main()
{
    float process;
    float quanta;

    cout<<"Enter the number of processes: "<<endl;
    cin>>process;

    cout<<"Enter quanta: "<<endl;
    cin>>quanta;

    vector<pair<float,pair<float,float>>> vec;
    vector<pair<float,float>> waitTime;
    unordered_map<float,float> execu;
    
    cout<<"Enter the arrival and CPU time: "<<endl;
    for (float i = 0; i < process; i++)
    {
        float arr,cpu;
        cin>>arr>>cpu;
        vec.push_back({i+1,{arr,cpu}});
    }
    
    sort(vec.begin(),vec.end(),comp);

    for (auto it: vec)
    {
        execu[it.first]=it.second.second;
    }
    
    float flag=0;
    float flag2=0;
    float flag3=0;
    float flagforpush=0;
    float tempcount=0;
    vector<pair<float,pair<float,float>>>:: iterator tempItr;
    queue<vector<pair<float,pair<float,float>>>:: iterator> q;
    
    while(flag!=process)
    {   
        if(::count==tempcount)
        {
            vector<pair<float,pair<float,float>>>:: iterator itr= find_if(vec.begin(),vec.end(),isequaltocount);
            if(itr!=vec.end())
            {   
                q.push(itr);
                float index=itr-vec.begin();
                
                while (flag2==0)
                {
                    vector<pair<float,pair<float,float>>>:: iterator it=vec.begin()+index+1;
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
            for (float i =::count; i <= tempcount; i++)
            {
                // cout<<"hello"<<endl;
                ::x=i;
                vector<pair<float,pair<float,float>>>:: iterator itr= find_if(vec.begin(),vec.end(),isequaltoi);
                if (itr!=vec.end())
                {
                    // cout<<"currently founded process "<<itr->first<<endl;
                    q.push(itr);
                    float index=itr-vec.begin();

                    while (flag3==0)
                    {
                        vector<pair<float,pair<float,float>>>:: iterator it=vec.begin()+index+1;
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
        for (float i = 0; i < quanta; i++)
        {
            cout<<"Process "<<q.front()->first<<" is being executed at time= "<<tempcount<<endl;
            q.front()->second.second--;
            if(q.front()->second.second==0)
            {   
                float temp3=execu[q.front()->first];
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