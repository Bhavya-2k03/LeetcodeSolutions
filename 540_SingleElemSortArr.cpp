#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int binary(int left, int right, vector<int>&nums)
    {
        if(left<right)
        {
            int mid=(left+right)/2;
            if(mid%2==0) 
            {
                if(nums[mid]==nums[mid+1])return binary(mid+1,right,nums);
                else return binary(left,mid,nums);
            }
            if(mid%2!=0) 
            {   
                if(nums[mid]==nums[mid-1]) return binary(mid+1,right,nums);
                else return binary(left,mid,nums);
            }
        }
        return nums[left];
    }
    int singleNonDuplicate(vector<int>& nums) {
        return binary(0,nums.size()-1,nums);

    }
};
int main()
{
    









return 0;
}