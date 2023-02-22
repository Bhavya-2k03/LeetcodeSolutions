#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector<int> vec;

         // for (int i = 0; i < nums.size()-1; i++)
         // {
         //    vec.push_back(nums[i+1]-nums[i]);
         // }
         unordered_set<int> s;
         // unordered_map<int,int> m;

         for (int i = 0; i < nums.size(); i++)
         {
            s.insert(nums[i]);
         }
         int count =0;

         // for (int i = 0; i < nums.size()-1; i++)
         // {
         //    // vec.push_back(nums[i+1]-nums[i]);
         //    if (m.find(nums[i]+1)!=m.end() && m.find(nums[i]-1)!=m.end())
         //    { 
         //       count++;
         //    }
         //    else if(m.find(nums[i]-1)==m.end())
         //    {
         //    count==0;
         //    }
         // }
            int count2=0;
                for (int i = 0; i < nums.size(); i++)
         {
            // vec.push_back(nums[i+1]-nums[i]);
            if (s.find(nums[i]+1)!=s.end() && s.find(nums[i]-1)!=s.end())
            { 
               count++;
            }
            // else if(m.find(nums[i]-1)==m.end())
            // {
            // count==0;
            // }
            if(nums.size()==2 && m.find(nums[i]+1)!=m.end())
            {
               count2++;
            }
         }
         if (nums.size()==0)
         {
            return 0;
         }
         else if(m.size()==1)
         {
            return 1;
         }

         if (count!=0)
         {
            return count+2;
         }
         else if (m.size()==2 && count2 !=0)
         {
            return count2+1;
         }
         return 0;
    }
};
int main()
{
    Solution s1;
    vector<int> a={100,4,200,1,3,2};

    cout<<s1.longestConsecutive(a);











return 0;
}