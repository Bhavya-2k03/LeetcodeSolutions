#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count=0;
        for (int i = 1; i < nums.size(); i++)
        {
            if(nums[i-1]>nums[i])
            {
                count++;
                if(count>1) return false;
                if(i-2<0 || nums[i]>=nums[i-2]) nums[i-1]=nums[i];
                else  nums[i]=nums[i-1];
            } 
            
        }
        return true;
    }
};
int main()
{






return 0;
}