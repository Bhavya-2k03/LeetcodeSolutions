#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(!nums[i]) count++;
            else 
            {
                nums[i-count]=nums[i];
                nums[i]=0;
            }
        }
    }
};
int main()
{
    









return 0;
}