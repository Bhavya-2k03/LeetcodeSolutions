#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void backtrack(vector<vector<int>> &res, vector<int> &vec, vector<int> &nums, int start,long long sum, int &target)
{   
    if(target==sum && vec.size()==4)
    {
        res.push_back(vec);
        return;
    }
    if(target!=sum && vec.size()==4) return; 

    for (int i = start; i <nums.size() ; i++)
    {
        if(i>start && nums[i]==nums[i-1]) continue;
     
        vec.push_back(nums[i]);
        sum+=(long long)nums[i];
        backtrack(res,vec,nums,i+1,sum,target);
        vec.pop_back();
        sum-=nums[i];
    }
    
}
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<int> vec;
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        long long sum=0;
        backtrack(res,vec,nums,0,sum,target);
        return res;
    }
};
int main()
{
    









return 0;
}