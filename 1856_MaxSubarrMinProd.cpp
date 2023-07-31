#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
int val=INT_MAX;
    int solve(vector<int> &nums, vector<unsigned int> &dp, int index)
    {
        if(index==nums.size()) return 0;

        if(dp[index]!=0) return dp[index];


        int take=nums[index]+solve(nums,dp,index+1);
        take*=min(val,nums[index]);
        int dontake=solve(nums,dp,index+1);


    }
    int maxSumMinProduct(vector<int>& nums) {
        sort(nums.rend(),nums.rbegin());
        // unsigned int product=1;
        // for(auto i:nums) product*=i;
        vector<unsigned int> dp(nums.size()+1, 0);



    }
};
int main()
{
    









return 0;
}