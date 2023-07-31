#include<iostream>
#include<vector>
#include<algorithm>
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
                    if(nums[mid-1]>nums[mid]) return mid;
                    else return binarySearch(mid+1,right,nums);
                }
                else
                {
                    if(nums[mid]>nums[mid+1]) return mid+1;
                    else return mid;
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
                    if(nums[mid-1]>nums[mid]) return mid;
                    else return binarySearch(left,mid-1,nums);
                }
                else return mid;
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

    int Binary(int left, int right ,vector<int> &nums, int &target)
    {
    if(left<=right)
    {
        int mid =(left+right)/2;

        if(nums[mid]==target) return mid;
        else if (nums[mid]>target) return Binary(left,mid-1,nums,target);
        else return Binary(mid+1,right,nums,target);
    }
    else 
    return -1;
    };

    int search(vector<int>& nums, int target) {
        
        int temp=findMin(nums);
        // cout<<"Min element is at index "<<temp<<endl;
        // if (temp==-1)
        // cout<<nums.begin()+temp-1;
        int temp2=Binary(0,temp-1,nums,target);
        // cout<<temp2<<endl;
        if (temp2!=-1) return temp2;
        else
        {
            temp2=Binary(temp,nums.size()-1,nums,target);
        }
        return temp2;




    }
};
int main()
{
    
Solution s1;

vector<int> nums ={4,5,6,7,0,1,2};

int target =0;

cout<<s1.search(nums,target);








return 0;
}