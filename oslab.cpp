#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<unordered_map>
using namespace std;
class Triplet
{
    public:
    int a,b,c;
    void dosort(vector<int> &a)
    {

    }

};

int main()
{
    
vector<Triplet> data;
int size;

cout<<"Enter the number of Processes: ";
cin>>size;

cout<<"Enter arrival time & execution time"<<endl;
for (int i = 0; i < size; i++)
{
    int temp1,temp2;
    cin>>temp1>>temp2;
    data.push_back({i+1,temp1,temp2});
};

std::sort(data.begin(), data.end(), [](auto &left, auto &right){
    return left.second < right.second;
});






for (int i = 0; i < size; i++)
{
    cout<<data[i].a<<" "<<data[i].b<<" "<<data[i].c<<endl;
}





return 0;
}