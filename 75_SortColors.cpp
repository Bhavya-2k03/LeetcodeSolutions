#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> count(3,0);
        for(int i:nums) count[i]++;
        int x=0,i=0;
        
        while(i<nums.size())
        {
            if(!count[x])
            {
                x++;
            }    
            nums[i]=x;
            i++;
            count[x]--;
        }
    }
};
int main()
{
    









return 0;
}