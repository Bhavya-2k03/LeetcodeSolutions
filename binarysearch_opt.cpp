#include<iostream>
#include<vector>
using namespace std;
int target;
int Binary(int left, int right ,vector<int> &nums)
    {
    if(left<=right)
    {
        int mid =(left+right)/2;

        if(nums[mid]==target) return mid;
        else if (nums[mid]>target) return Binary(left,mid-1,nums);
        else return Binary(mid+1,right,nums);
    }
    else 
    return -1;
};


int main()
{
    vector<int> nums={2};

    cout<<"Enter target"<<endl;
    cin>>target;
    int left=0;
    int right=nums.size()-1;

    cout<<Binary(left,right,nums);




return 0;
}