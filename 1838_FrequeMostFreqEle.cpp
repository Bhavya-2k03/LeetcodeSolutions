#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long i=0,j=0,ans=0,sum=0;

        for (; j < nums.size(); j++)
        {
            sum+=nums[j];
            while((j-i+1)*nums[j]-sum>k) sum-=nums[i++];
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};
int main()
{
    









return 0;
}