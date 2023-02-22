#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int flag =0;
        
        vector<int>ans;
        unordered_map<int,int>ansSet;

        for (int i = 0; i < nums.size(); i++)   
        {
            int a=target- nums[i];
            if (ansSet.find(a)!=ansSet.end())
                {
                    ans.push_back(ansSet[a]);
                    ans.push_back(i);
                    return ans;
                }
            else
            {
                ansSet.insert({nums[i],i});
            }
        }
        return ans;
    }
};
int main()
{
  Solution a;
  vector<int> nums={1,3,67,4,3,-2,4,5,1,0};
  int target=5;
  vector<int>tom;
  tom=a.twoSum(nums,target);
  for (int i = 0; i < tom.size(); i++)
  {
    cout<<tom[i];
  };

return 0;
}
