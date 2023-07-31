#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool solve(vector<int> &nums, int index, vector<int> sum, int &target)
    {
        if(index==nums.size())
        {
            if(sum[0]==sum[1]) return true;
            return false;
        }
        

        for(int i=0; i<sum.size(); i++)
        {
            
            if(i>0 && nums.size()>1) if(sum[i-1]==sum[i]) continue;

            if(sum[i]+nums[index]>target) continue;
            sum[i]+=nums[index];
            if(solve(nums,index+1,sum,target)) return true;
            sum[i]-=nums[index];
        }
        return false;
    }

    bool canPartition(vector<int>& nums) {
        int temp=0;
        for(auto i:nums) temp+=i;
        if(temp%2) return false;
        int target=temp/2;
        vector<int> sum(2,0);
        return solve(nums,0,sum,target);
    }
};
int main()
{
    









return 0;
}