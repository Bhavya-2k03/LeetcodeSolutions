#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;


int main()
{
    
vector<pair<int,int>> a1;

cout<<"Enter arrival time & execution time"<<endl;
for (int i = 0; i < 4; i++)
{
    int temp1,temp2;
    cin>>temp1>>temp2;
    a1.push_back({temp1,temp2});
};

sort(a1.begin(),a1.end());

int x=1;
int count=0;
int process; 
while(true)
{   
    if(count==0)
    {
    process=count;
    }

    // if(count==0)
    // {
    // process=a1[0];
    // }


    

    cout<<"At time = "<<count<<" process "<<process+1<<" is running"<<endl;
    count++;
        if(a1[process].second>0)
        a1[process].second--;
    
    if (a1[0].second==0)
    {
        int stop=0;
        for (int i = 0; i < a1.size(); i++)
        {
            if(a1[i].second==0)
            stop++;
        }
    
        if(stop==a1.size())
        {
            cout<<"All processes executed successfully, Total time taken: "<<count<<" seconds";
            break;
        }
    }

    int min2;
    int min_index;
    int flag=1;
    if(a1[process].second==0)
    {
        for (int i = 0; i < a1.size(); i++)
        {
            if(i!=process && flag==1)
            {      
                min2=a1[i].second;
                // cout<<endl<<"min2 is "<<min2<<endl;
                min_index=i;
                flag=0;
                continue;
            }
            if(i!=process && a1[i].second!=0) 
            {
                if(min(min2,a1[i].second)!=min2)
                min_index=i;
                
                min2=min(min2,a1[i].second);
            }
        }
        process=min_index;
    }

    else
    {
        for (int i = 0; i < a1.size(); i++)
        {
            if(a1[i].first==count && a1[i].second<a1[process].second)
            process=i;
        }
    }

}

return 0;
}