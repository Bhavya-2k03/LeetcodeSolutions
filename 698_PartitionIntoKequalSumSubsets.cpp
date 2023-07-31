#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool backtrack(vector<int>& nums, vector<int> &subnum, int index, int &target)
    {
        if(index==nums.size())
        {
            for(int i; i<subnum.size(); i++) if(subnum[i]!=subnum[0]) return false;
            return true;
        }

        for(int i=0; i<subnum.size(); i++)
        {
            if(subnum[i]+nums[index]>target) continue;
            
            int j=i;
            while(--j>=0) if(subnum[j]==subnum[i]) break;
            if(j!=-1) continue;

            subnum[i]+=nums[index];
            if(backtrack(nums,subnum,index+1,target)) return true;
            subnum[i]-=nums[index];
        }
        return false;
    }

    bool canPartitionKSubsets(vector<int>& nums, int k) {
        vector<int> subsum(k,0);
        int sum=0;
        for(auto i:nums) sum+=i;
        if(sum%k!=0) return false;
        sum=sum/k;
        sort(nums.rbegin(),nums.rend());
        return backtrack(nums,subsum,0,sum);
    }
};


int main()
{
    









return 0;
}