#include<iostream>
#include<vector> 
using namespace std;



class Solution {
public:
    void binary(int left, int right, vector<int> & nums, vector<int>& ans, int &target)
    {
        if(left<=right)
        {
            int mid=right+(left-right)/2;
            if(nums[mid]==target && mid>0 && nums[mid-1]!= target)
            {
                ans.push_back(mid);
                return;
            }
            if(nums[mid]==target && mid<nums.size()-1 && nums[mid+1]!= target)
            {
                ans.push_back(mid);
                return;
            }
            if(nums[mid]==target && mid>0 && nums[mid-1]== target)
            {
                binary(left, mid-1,nums,ans,target);
            }
            else if(nums[mid]==target && mid<nums.size()-1 && nums[mid+1]== target)
            {
                binary(mid+1,right,nums,ans,target);
            }
        }
        else return;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        binary(0,nums.size()-1,nums,ans,target);

    return ans;


    }
};
int main()
{
    









return 0;
}