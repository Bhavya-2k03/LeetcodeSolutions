#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void backtrack(int x, vector<int> &check, vector<int>&nums, vector<int> &vec, vector<vector<int>> &vecs)
    {
        if(vec.size()==nums.size()) 
        {
            vecs.push_back(vec);
            return;
        }
        else if(vec.size()>nums.size()) return;
        for (int i = x; i < nums.size(); i++)
        {
            if(check[i]) continue;
            if(i==x||nums[i]!=nums[i-1])
            {
                vec.push_back(nums[i]);
                check[i]==1;
                backtrack(x,check,nums,vec,vecs);
                check[i]=0;
                vec.pop_back();
            }
        }
        
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> vecs;
        vector<int> vec;
        vector<int> check(nums.size(),0);
        sort(nums.begin(),nums.end());
        backtrack(0,check,nums,vec,vecs);
        return vecs;

    }
};
int main()
{
    









return 0;
}