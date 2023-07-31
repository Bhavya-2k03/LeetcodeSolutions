#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
struct PairHash {
    template <typename T1, typename T2>
    std::size_t operator()(const std::pair<T1, T2>& p) const {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);
        return h1 ^ h2;
    }
};



class Solution {
public:

    int solve(vector<int> &nums, vector<unordered_map<int,int>> &dp, int index, int target)
    {
        if(index==nums.size())
        {
            if(!target) return 1;
            else return 0;
        }
        if(dp[index].find(target)!=dp[index].end()) return dp[index][target];
        
        int takepositive=solve(nums,dp,index+1,target-nums[index]);
        int takenegative=solve(nums,dp,index+1,target+nums[index]);

        return dp[index][target]=takepositive+takenegative;

    }
    int findTargetSumWays(vector<int>& nums, int target) {
        vector<unordered_map<int,int>> dp(nums.size());
        return solve(nums,dp,0,target);        
        
    }
};
int main()
{
    









return 0;
}