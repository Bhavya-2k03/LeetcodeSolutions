#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(nums2.empty()) return;
        if(!nums1[0])
        {
            for (int i = 0; i < nums2.size(); i++) nums1[i]=nums2[i];
            return;
        }
        // int temp=m;
        for (int i = 0; i < nums2.size(); i++) nums1[m+i]=nums2[i];
        int left=0,right=m;
        while(left<right)
        {
            if(nums1[left]>nums1[right])
            {
                int temp=nums1[right];
                nums1.erase(nums1.begin()+right);
                nums1.insert(nums1.begin()+left,temp);
                right++;
            }
            left++;
        }
        return;
    }
};

int main()
{
    









return 0;
}