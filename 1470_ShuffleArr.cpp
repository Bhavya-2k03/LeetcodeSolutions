#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
        }
        return ans;
    }
};
int main()
{
    









return 0;
}