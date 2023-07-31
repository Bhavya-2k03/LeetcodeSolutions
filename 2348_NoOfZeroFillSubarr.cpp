#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int count=0, i=0, temp=0;
        while(i<nums.size())
        {
            if(nums[i]==0)
            {
                temp++;
                i++;
                continue;
            }
            if(temp)
            {
                count+=(temp*(temp+1))/2;
                temp=0;
            }
            i++;
        }
        if(temp)
        {
            count+=(temp*(temp+1))/2;
        }
        return count;
    }
};
int main()
{
    









return 0;
}