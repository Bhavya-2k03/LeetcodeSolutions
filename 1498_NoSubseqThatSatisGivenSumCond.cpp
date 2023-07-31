#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void backtrack(vector<int> &nums, int &target, int minVal, int maxVal, int &count, int begin)
    {
        if(begin!=0 && minVal+maxVal<=target) count++;

        for (int i = begin; i < nums.size()  ; i++)
        {
            minVal=min(minVal,nums[i]);
            maxVal=max(maxVal,nums[i]);
            backtrack(nums,target,minVal,maxVal,count,begin+1);
        }
        
    }




    int numSubseq(vector<int>& nums, int target) {
        int  minval=INT_MAX, maxval =INT_MIN,int count=0;
        backtrack(nums,target,minval,maxval,count,0);
        return count % (10^9 + 7);


        
    }
};
int main()
{
    









return 0;
}