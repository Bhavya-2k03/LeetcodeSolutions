#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (nums2.empty()) return;
        if (nums1[0]==0) 
        {
            for(int i=0; i<nums1.size(); i++) nums1[i]=nums2[i]; 
            return;
        }
        int i=0,j=0;
        while(nums1[i])
        {
            if(nums1[i]<=nums2[j] && nums1[i+1]>nums2[j])
            {
                int temp=nums1[i+1];
                nums1[i+1]=nums2[j];
                nums2[j]=temp;
            }
            i++;
        }
        while(i<m+n)
        {
            nums1[i]=nums2[j];
            i++;
            j++;
        }
        
    }
};
int main()
{
    









return 0;
}