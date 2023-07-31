#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1,count=1;
        while(i<nums.size())
        {
            if(nums[i]!=nums[i-1]) count=1;
            else count++;
            if(count>2) 
            {
                nums.erase(nums.begin()+i);
                continue;
            }
            i++;
        }
        return nums.size();
    }
};
int main()
{
    









return 0;
}