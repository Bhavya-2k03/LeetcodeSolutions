// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
bool sortbysec(const pair<int,int> &a,
			const pair<int,int> &b)
{
	return (a.second < b.second);
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
   int k=1;
   map<int,int>name;
   for(auto elm: time)
   {
      cout<<"x"<<k<<" "<<elm.first<<" "<<elm.second<<endl;
      name.insert({k,elm.first});
      k++;
   }
   sort(time.begin(),time.end());
   sort(time.begin(), time.end(), sortbysec);
   k=1;
   cout<<"Execution order "<<endl;
   for(auto elm: time)
   {
      cout<<"x"<<name<<" "<<elm.first<<" "<<elm.second<<endl;
      k++;
   }
   vector<int> wtime;
   float total_extime=0;
   for(auto elm:time)
   {
      wtime.push_back(total_extime-elm.second);
      total_extime+=elm.first;
      
   }
   float sum=0;
   for(auto elm: wtime)
   {
      // cout<<elm<<" ";
      sum+=elm;
   }
   cout<<endl;
   cout<<"Avg wait time: "<<sum/n<<endl;
   cout<<"Avg Execution time: "<<total_extime/n;


return 0;
}