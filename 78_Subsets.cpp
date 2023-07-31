#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> sub;
        vector<vector<int>> subs;
        backtrack(nums,0,sub,subs);
        return subs;

    }
    void backtrack(vector<int>& nums, int x, vector<int> &sub, vector<vector<int>> &subs)
    {
        subs.push_back(sub);
        for (int i = x; i < nums.size(); i++)
        {
            sub.push_back(nums[i]);
            backtrack(nums,i+1,sub,subs);
            sub.pop_back();
        }
    }
}; 
int main()
{
    









return 0;
}