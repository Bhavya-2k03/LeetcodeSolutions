#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // if(nums.size()==1 && k) return false;
        unordered_map<int,int> m;
        int temp=k,left=0,right=1;
        m[nums[left]]=1;
        while(temp && right<nums.size())
        {
            m[nums[right]]++;
            if(m[nums[right]]>1) 
            {
                cout<<nums[right];
                return true;
            }
            right++;
            temp--;
        }
        m[nums[left]]--;
        left++;
        int flag=1;
        while(left<=right && right<nums.size())
        {
            // cout<<"right is at: "<<nums[right]<<" count is "<<m[nums[right]]<<endl;
            if(flag) m[nums[right]]++;
            if(m[nums[right]]>1) 
            {
                cout<<nums[right];
                return true;
            }
            if(right==nums.size()-1) flag=0;
            else right++;
            m[nums[left]]--;
            // cout<<"count of "<<nums[left]<<" decreased by 1, new count: "<<m[nums[left]]<<endl;
            left++;
        }
        return false;


    }
};
int main()
{
    









return 0;
}