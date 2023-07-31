#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool possible(vector<int> &weights, int days, int cap)
    {
        int temp=cap;
        for (int i = 0; i < weights.size(); i++)
        {
            cap-=weights[i];
            if(cap<0)
            {
                days--;
                if(days==0) return false;
                cap=temp;
                cap-=weights[i];
            }
        }
        return true;
        
    }
    int binary(int left, int right, vector<int> &weights, int days)
    {
        int mid=left+(right-left)/2;
        if(left<right)
        {
            if(possible(weights,days,mid)) return binary(left,mid,weights,days);
            else return binary(mid+1,right,weights,days);
        }
        return left;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int max_=weights[0];
        int sum=0;
        for(auto i: weights) 
        {   
            max_=max(max_ ,i); 
            sum+=i;
        }    

        return binary(max_,sum,weights,days);
    }
};
int main()
{
    









return 0;
}