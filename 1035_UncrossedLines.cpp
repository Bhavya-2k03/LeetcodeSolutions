#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int get_index(int index_nums2, vector<int> &nums2, int x)
    {
        for(int i=index_nums2; i<nums2.size(); i++)
        {
            if(nums2[i]==x) return i;
        }
        return -1;
    }
    int solve(int index_nums1, int index_nums2,vector<int>& nums1, vector<int>& nums2, vector<vector<int>> &dp)
    {
        if(index_nums1 ==nums1.size()|| index_nums2==nums2.size()) return 0;
        if(dp[index_nums1][index_nums2]!=-1) return dp[index_nums1][index_nums2];
        int take=0;
        int ind=get_index(index_nums2,nums2,nums1[index_nums1]);
        if(ind!=-1)
        {
            take=1+solve(index_nums1+1,ind+1,nums1,nums2,dp);
        }
        int dontake=solve(index_nums1+1,index_nums2,nums1,nums2,dp);
        return dp[index_nums1][index_nums2]=max(take,dontake);

    }

    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> dp(nums1.size(), vector<int> (nums2.size(),-1));
        return solve(0,0,nums1,nums2,dp);

    }
};
int main()
{
    









return 0;
}