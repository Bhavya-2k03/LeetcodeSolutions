#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // *max_element(nums.begin(),nums.end());
        vector<int> ans;
        max((int)nums.size(),2);
        vector<int> vec(max((int)nums.size()+1,*max_element(nums.begin(),nums.end())+1),0); 
        for(auto i:nums) vec[i]=1;
        for(int i=1; i<vec.size(); i++) 
        {   
            if(!vec[i]) ans.push_back(i);
        }
        return ans;


    }
};

int main()
{
    









return 0;
}