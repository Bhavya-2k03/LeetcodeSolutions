#include<iostream>
#include<vector>
using namespace std;    
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
        if(arr.size()<k) return 0;
        int sum=arr[0], left =0, right =0,count=0;
        while(right-left+1!=k) 
        {
            right++;
            sum+=arr[right];
        }
        while(true)
        {
            if((sum/k)>=threshold) count++;
            sum-=arr[left];
            left++;
            right++;
            if(right==arr.size()) break;
            sum+=arr[right];
        }
        return count;

    }
};
int main()
{
    









return 0;
}