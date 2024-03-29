#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int k =4;
        sort(nums.begin(),nums.end());

        for (int i = 0; i<nums.size()-1; i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue;
   
            for (int j = i+1; j < nums.size(); j++)
            {
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int left=j+1, right =nums.size()-1;
                while(left<right)
                {
                    if(nums[left]==nums[left-1]) 
                    {
                        left++;
                        continue;
                    }

                    int sum=nums[i]+nums[j]+nums[left]+nums[right];
                    
                    if(sum==target)
                    {
                        res.push_back({nums[i],nums[j],nums[left],nums[right]});
                    }
                    else if(sum>target)
                    {
                        right--;
                        continue;
                    }
                    else
                    {
                        left++;
                        continue;
                    }
                    left++;
                    right--;
                }
            }
            
        }
    }
};
int main()
{
    









return 0;
}