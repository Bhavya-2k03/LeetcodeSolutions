#include<iostream>
#include<vector>
using namespace std;

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

       vector<pair<int,int>> time;
   cout<<"no. of processes: ";
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
      int a,b;
      cout<<"Execution time: ";
      cin>>a;
      cout<<"Arrival time: ";
      cin>>b;
      time.push_back({a,b});
   }
    vector<int> exeTime={5,3,2};
    int arrTime[3];
    int waitTime[3];
    cout<<"Enter the Arrival time of each program"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cin>>arrTime[i];
    }

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