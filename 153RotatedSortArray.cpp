#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int binarySearch(int left, int right, vector<int> &nums)
    {
        while(left<=right)
        {
            int mid =(left+right)/2;
            // int min;
            int temp=nums[nums.size()-1]-nums[mid];
            if(temp<0)
            {
                if(mid!=0)
                {
                    if(nums[mid-1]>nums[mid]) return nums[mid];
                    else return binarySearch(mid+1,right,nums);
                }
                else
                {
                    if(nums[mid]>nums[mid+1]) return nums[mid+1];
                    else return nums[mid];
                }
                // min=*min_element(nums[left],min);
                // if(nums[mid]<min)
                //     min=nums[mid];
                return binarySearch(mid+1,right,nums);
                // left=mid+1;
            }
            else if(temp>=0)
            {
                if(mid!=0)
                {
                    if(nums[mid-1]>nums[mid]) return nums[mid];
                    else return binarySearch(left,mid-1,nums);
                }
                else return nums[mid];
                // return 
                // binarySearch(left,mid-1,min,nums);
            }
            // else
            // return min;
  
        }
    return -1;
    };

    int findMin(vector<int>& nums) {
        int Kmax =nums.size();
        int left=0, right=Kmax;
        int min=nums[0];

        return binarySearch(left, right,nums);


    }
};
int main()
{
    vector<int> a={5,1,2,3,4};


    Solution s1;

    cout<<s1.findMin(a);








return 0;
}