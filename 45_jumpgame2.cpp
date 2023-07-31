#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1) return 0;
        
        int right=nums[0], left =0, max_index_for_jumping=0, count=1;

        while (true)
        {
            if(right>=nums.size()-1) return count;
            while(left<=right) 
            {
                max_index_for_jumping=max(max_index_for_jumping,left+nums[left]);
                left++;
            }
            left=right+1;
            right=max_index_for_jumping;
            count++;
        }
        return count;
    }
};
int main()
{
    









return 0;
}