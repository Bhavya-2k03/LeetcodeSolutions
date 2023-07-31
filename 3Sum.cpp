#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
class Solution {
public:
vector<vector<int>> ans;

// this.st.insert({0})

    void TwoSum(int left, int right, int sum, int current, vector<int> nums, set<vector<int>> st)
    {
        while(left<right)
        {    
            // st.insert({0});
            if(nums[left]+nums[right]==sum) 
            {
                if (st.find({current,nums[left], nums[right]})==st.end())
                    {   ans.push_back({current,nums[left], nums[right]});
                        st.insert({current,nums[left], nums[right]});
                    }
                
                left++; 
                right--;
            }
            else if (nums[left]+nums[right]<sum) left++;
            else right--;
        }
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
            
        sort(nums.begin(),nums.end());

            set<vector<int>> st;
        for(int i=0; i<nums.size()-2; i++) 
        {
            // if(nums[i]==nums[i+1])
            //     continue;
            TwoSum(i+1,nums.size()-1, 0-nums[i],nums[i], nums, st);
        }

    for(auto i:ans)
       { for(auto y:i)
            cout<<y<<" ";
        cout<<endl;
       }
    }
};
int main()
{
    
Solution s1;

vector<int> nums ={-1,0,1,2,-1,-4};
s1.threeSum(nums);








return 0;
}