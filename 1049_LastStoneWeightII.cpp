#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int solve(vector<vector<int>> &dp, vector<int> &nums, int index, int sum1, int sum2)
    {
        if(index==nums.size()) return abs(sum1-sum2);
        if(dp[index][sum1]!=-1) return dp[index][sum1];
        int addInSum1=solve(dp,nums,index+1,sum1+nums[index],sum2);
        int addInSum2=solve(dp,nums,index+1,sum1,sum2+nums[index]);
        return dp[index][sum1]=min(addInSum1,addInSum2);
    }
    int lastStoneWeightII(vector<int>& stones) {
        int sum=0;
        for(auto i:stones) sum+=i;
        vector<vector<int>> dp(sum+1, vector<int>(sum+1,-1));
        return solve(dp,stones,0,0,0);

    }
};
int main()
{
    









return 0;
}