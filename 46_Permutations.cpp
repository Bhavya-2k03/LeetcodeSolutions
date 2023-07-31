#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
   void Backtrack(int x,vector<int> &check, vector<int> &nums, vector<int> &vec, vector<vector<int>> &vecs )
   {
        if(vec.size()==nums.size())
        {
            vecs.push_back(vec);
            return;
        }
        else if(vec.size()>nums.size()) return;
        else
        {
            for (int i = x; i < nums.size(); i++)
            {
                if(check[i]) continue;
                check[i]=1;
                vec.push_back(nums[i]);
                Backtrack(x,check, nums,vec,vecs);
                check[i]=0;
                vec.pop_back();
            }
        }
   }

    vector<vector<int>> permute(vector<int>& nums) {
        int sum=0;
        vector<vector<int>> vecs;
        vector<int> vec;
        vector<int> check(nums.size(),0);
        Backtrack(0,check,nums,vec,vecs);
        return vecs;
    }
};





int main()
{
    









return 0;
}