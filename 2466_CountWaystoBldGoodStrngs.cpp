#include<iostream>
#include<vector>
#include<maths>
using namespace std;
class Solution {
public:
    int solve(long long &low, long long &high, long long &zero, long long &one, vector<int> &dp, long long length)
    {   
        if(length>high) return 0;
        if(dp[length]!=-1) return dp[length];
        int takezero=solve(low,high,zero,one,dp,length+zero);
        int takeone=solve(low,high,zero,one,dp,length+one);        
        if(length>=low && length<=high) return dp[length]=1+takezero+takeone;
        return dp[length]=takezero+takeone;
    }
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high+1,-1);
        int x=pow(10,9)+7;
        return solve(low,high,zero,one,dp,0) %(int)(pow(10,9)+7);
    }
};
int main()
{   
    









return 0;
}