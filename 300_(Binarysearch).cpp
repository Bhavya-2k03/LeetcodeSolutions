#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> vec;
        vec.push_back(nums[0]);
        for(int i:nums)
        {
            if(i>vec.back()) vec.push_back(i);
            else if(i<vec.back()) 
            {
                int upper=lower_bound(vec.begin(),vec.end(),i)-vec.begin();
                vec[upper]=i;
            }
        }
        return vec.size();
    }
};
int main()
{
    









return 0;
}