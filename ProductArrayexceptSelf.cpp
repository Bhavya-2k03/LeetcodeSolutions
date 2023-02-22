#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    
    // unordered_set<int> s;
    // unordered_map<int,int> m;

    // int a=1;

    
    vector<int> vec;
    if(nums[0]<0)
    {
        vec.push_back(-1);
    }
    else if (nums[0]==0)
    {
        vec.push_back(0);
    }
    else
    {
        vec.push_back(1);
    }
    int cur=vec[0];
    // vec
    for (int i = 1; i < nums.size(); i++)
    {   
        vec.push_back(cur);
        cur=cur*nums[i];
        // cout<<vec[i];
    }
    cout<<"to"<<vec[2];

    cur=nums[nums.size()-1];
    cout<<cur;
    for (int i = nums.size()-2; i > 0; i--)
    {   
        // cout<<"tom";
        vec[i]=vec[i]*cur;
        // cout<<endl<<vec[i];
        cur=cur*nums[i];
        cout<<"bhavya"<<cur<<"t"<<endl;
    }
    
    return vec;



    }
};
int main()
{
    
vector<int> a={9,1,-2};
vector<int> b;
Solution s1;

// cout<<"hi";

b=s1.productExceptSelf(a);
for (int i = 0; i < b.size(); i++)
{
    cout<<b[i]<<endl;
}


cout<<"hello";




return 0;
}