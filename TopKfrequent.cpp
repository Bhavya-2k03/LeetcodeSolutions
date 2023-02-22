#include<iostream>
#include<vector>
#include<unordered_map>
// #include<bits/stdc++.h>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            cout<<"hi"<<endl;
            m[nums[i]]++;
        }

        vector<pair<int,int>> vec;
        for (auto i :m)
        {
            cout<<"hello"<<endl;
        vec.push_back(make_pair(i.second,i.first));
        };

        sort(vec.begin(),vec.end());
        for (auto i:vec){
            cout<<i.first<<" "<<i.second<<endl;
        }
        vector<int>ans;
        int n=vec.size();
        cout<<"size = "<<n<<endl;

        for (int i = n-1; i > n-k-1; i--)
        {
            cout<<vec[i].second<<endl;
            ans.push_back(vec[i].second);
        }
        
        return ans;
    }
};
int main()
{
    

vector<int> a{1};

// Solution s1;

// cout<<"answer is "<<s1.topKFrequent(a,1);






return 0;
}