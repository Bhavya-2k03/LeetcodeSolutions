#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        
        if(!k) return;

        vector<int> vec;
        
        for (int i = 0; i < nums.size(); i++) vec.push_back(nums[i]);

        for (int i = 0; i < vec.size(); i++) nums[(i+k)%vec.size()]=vec[i];
        

    }
};
int main()
{
    









return 0;
}