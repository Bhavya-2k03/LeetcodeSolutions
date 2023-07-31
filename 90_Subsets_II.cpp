#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void Backtrack(int x, vector<int> &nums, vector<int> &sub,vector<vector<int>> &subs)
    {
        subs.push_back(sub);
        for (int i = x; i < nums.size(); i++)
        {
            if(i==x || nums[i]!=nums[i-1])
            {
                sub.push_back(nums[i]);
                Backtrack(i+1,nums,sub,subs);
                sub.pop_back();
            }
        }
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> subs;
        vector<int> sub;
        Backtrack(0,nums,sub,subs);
        return subs;

    }
};
int main()
{
    









return 0;
}