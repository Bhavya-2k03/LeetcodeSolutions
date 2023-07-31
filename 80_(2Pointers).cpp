#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1) return 1;
        int left=2, right =2;
        while(right<nums.size())
        {
            if(nums[right]>nums[left-2]) 
            {
                nums[left]=nums[right];
                left++;
            }
            right++;
        }
    return left;
    }
};

int main()
{
    









return 0;
}