#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int binary(int left, int right, vector<int>& nums )
    {
        if(left<=right)
        {
            int mid =(left+right)/2;
            if(mid!=nums.size()-1 && mid !=0)
            {
                if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]) return mid;
                else if(nums[mid]>nums[mid+1] && nums[mid]<nums[mid-1]) return binary(left,mid-1,nums);
                else return binary(mid+1,right,nums);
            }
            else if(mid==0)
            {
                if(nums[mid]>nums[mid+1]) return mid;
                else return binary(mid+1,right,nums);
            }
            else if(mid==nums.size()-1)
            {
                if(nums[mid]>nums[mid-1]) return mid;
                else return binary(left,mid-1,nums);
            }
            else{
                // cout<<"hello";
                 return -1;
            }
        }
        else
        return -1;
    }
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int left = 0;
        int right =nums.size()-1;
        return binary(left,right,nums);

    }
};
int main()
{
    









return 0;
}