#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool binary_search(int left, int right, int &target, vector<int> &nums)
    {
        if(left<=right)
        {
            int mid=(left+right)/2;
            if(nums[mid]==target) return true;
            else if(nums[mid]<=target) return binary_search(mid+1,right,target,nums);
            else return binary_search(left,mid-1,target,nums);            
        }
        else return false;
    }


    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        vector<int> nums;
        for(auto i:matrix)
        {
            for(auto y:i)
            {
                nums.push_back(y);
            }
        }

        int left =0;
        int right=nums.size()-1;

        return binary_search(left,right,target,nums);

    }
};
int main()
{
    Solution s1;
    vector<vector<int>> a={{1}};
    cout<<s1.searchMatrix(a,1);









return 0;
}