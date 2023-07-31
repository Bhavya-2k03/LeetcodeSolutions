#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// bool comp(pair<int,int> a, pair<int,int> b){
//     return a.second>b.second;
// }


// int main()
// {
//     vector<pair<int,int>> v;
//     v.push_back({1,10});
//     v.push_back({7,2});
//     v.push_back({9,1});
//     v.push_back({6,100});
//     v.push_back({3,1000});
//     v.push_back({8,69});
//     v.push_back({1,10});

//     sort(v.begin(),v.end(),comp);
//     for (auto i:v) cout<<i.first<<" "<<i.second<<endl;

// return 0;
// }

int count =0;

void xyz()
{
    cout<<::count;
}


int main()
{
    vector<int> v{2,1,4,5,7,9};
    auto it = find(v.begin(),v.end(),4);
    cout<<(it-v.begin());
    return 0;

}