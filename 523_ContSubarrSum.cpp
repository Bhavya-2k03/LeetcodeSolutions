#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        vector<int> prefixsum(nums.size());
        
        prefixsum[0]=nums[0]%k;
        unordered_map<int,int> m;
        for (int i = 1; i < nums.size(); i++)
        {
            prefixsum[i]=(prefixsum[i-1]+nums[i]) % k;
            if(m.find(prefixsum[i])!=m.end()) if((i-m.find(prefixsum[i])->second)>1) return true;
            else m[prefixsum[i]]=i;
        }




        return false;
        




        
    }
};
int main()
{
    









return 0;
}