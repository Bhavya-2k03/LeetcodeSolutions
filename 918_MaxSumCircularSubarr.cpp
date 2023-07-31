#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=0,max_sum=INT_MIN,temp=0,minSumInSubarray=0,total=0;
        for(int& i:nums)
        {
            sum=max(i,sum+i);
            max_sum=max(max_sum,sum);

            temp=min(i,temp+i);
            minSumInSubarray=min(minSumInSubarray,temp);
            
            total+=i;
        }
        int x=max(max_sum,total -minSumInSubarray);
        if(!x) return(max_sum);
        return x;
        
    }
};
int main()
{
    









return 0;
}