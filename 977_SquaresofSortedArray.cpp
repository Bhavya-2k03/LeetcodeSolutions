#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0, right=nums.size()-1;
        vector<int> res(nums.size(),0);
        int i=res.size()-1;
        while(left<=right)
        {
            int leftp=pow(nums[left],2), rightp=pow(nums[right],2);
            if(leftp>=rightp) 
            {
                res[i]=leftp;
                left++;
                i--;
            }
            else
            {
                res[i]=rightp;
                right--;
                i--;
            }
        }
        return res;
    }
};
int main()
{
    









return 0;
}