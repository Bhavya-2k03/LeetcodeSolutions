#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> dp;
    Solution ():dp(20,0){};
    int numTrees(int n) {
        if(n<=1) return 1;
        if(dp[n]!=0) return dp[n];
        else
        {
        int count =0;
        for (int i = 1; i <=n; i++) count=count+numTrees(i-1)*numTrees(n-i);
        dp[n]=count;
        return dp[n];        
        }
    }
};
int main()
{
    









return 0;
}