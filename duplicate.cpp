#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>ans;
        for (int num : nums)
        {   
            if(ans.count(num))
            {
                return true;
            }
            else
            {
                ans.insert(num);
            }

        }
        return false;
    }
};





int main()
{
    
vector<int>nums={1,2,3,4};

Solution s;
cout<<s.containsDuplicate(nums);









return 0;
}