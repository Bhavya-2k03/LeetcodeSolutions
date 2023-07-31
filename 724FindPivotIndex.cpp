#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum=0,rsum=0, i=0;
        for(auto i:nums) rsum+=i;

        while(i<nums.size())
        {
            rsum-=nums[i];
            if(i) lsum+=nums[i-1];
            if(rsum==lsum) return i;
            i++;
        }
    return -1;
    }
};
int main()
{
    









return 0;
}