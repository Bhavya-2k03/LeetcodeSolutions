#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod=1;
        int result =INT_MIN;
        for(auto i:nums)
        {
            prod=prod*i;
            result=max(prod,result);
            if(!prod) prod=1;
        }
        prod=1;
        for(int i=nums.size()-1; i>=0; i--)
        {
            prod=prod*nums[i];
            result=max(prod,result);
            if(!prod) prod=1;
        }
        return result;
    }
};
int main()
{
    









return 0;
}