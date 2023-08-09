#include<iostream>
#include<vector>
#include<unordered_map>
class Solution {
public:
    int minimumSeconds(vector<int>& nums) {
        unordered_map<int, vector<int>> m;
        for(int i=0; i<nums.size(); i++) m[nums[i]].push_back(i);

        int ans =INT_MAX;
        for(auto &[i,pos]:m)
        {
            pos.push_back(pos[0]+nums.size()); //for circular simulation (thoda soch, fir samaj aayega)
            int res=0;
            for(int i=1; i<pos.size(); i++) res=max(res,(pos[i]-pos[i-1])/2);
            ans=min(ans,res);
        }
        return ans;
    }
};
using namespace std;

int main()
{
    









return 0;
}