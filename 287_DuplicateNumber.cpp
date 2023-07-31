#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int binary(int left,int right, vector<int> &nums)
    {
        int mid=(left+right)/2;
        int count =0;
        for(auto i:nums) if (i<=mid) count++;
        if(left<right)
        {
            if(count>mid) return binary(left,mid,nums);
            else if (count<=mid) return binary(mid+1,right,nums);
        }
        return left;

    }
    int findDuplicate(vector<int>& nums) {
        int left=1, right=nums.size()-1;
        return binary(left,right,nums);

    
    }
};
int main()
{
    









return 0;
}