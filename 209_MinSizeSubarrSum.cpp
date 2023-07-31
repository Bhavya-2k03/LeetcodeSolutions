#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left, right,count, MinCount=INT_MAX,sum=0;
        left=right=0;
        while(left<=right && right<nums.size())
        {
            sum+=nums[right];
            while(sum>=target)
            {
                MinCount=min(MinCount,right-left+1);
                sum-=nums[left++];
            }
            right++;
        }
        if(MinCount==INT_MAX) return 0;
        return MinCount;

    }
};
int main()
{
    









return 0;
}