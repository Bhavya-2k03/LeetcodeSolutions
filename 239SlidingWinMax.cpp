#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int left=0;
        int right=k-1;
        int flag=1;
        int max=nums[left];
        vector<int> ans;
        while(right!=nums.size())
        {
            if (flag==1)
            {
                for (int i = left; i <= right; i++)
                {
                    if(nums[i]>max)
                    max=nums[i];
                }
                ans.push_back(max);
                // if(nums[left]==max)
                flag=0;
            }
            else
            {
                if(nums[right]>max)
                {max=nums[right];

                ans.push_back(max);
                flag=0;
                }
                else if(nums[left-1]==max) 
                {
                    max=nums[left];
                    flag =1;
                    continue;
                }
                else if(nums[right]<=max)
                ans.push_back(max);
            }
            right++;
            left++;
        }
        return ans;





    }
};



int main()
{
    
Solution s1;

// a=s1.maxSlidingWindow({1,3,-1,-3,5,3,6,7},3);

 







return 0;
}