#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int solve(vector<float> &dp, int &n, int &k, int &maxpts, int score)
    {
        if(score>=k)
        {
            if(score<= n) return 1;
            else return 0;
        }
        if(dp[score]!=-1) return dp[score];
        
        for (int i = 1; i < maxpts; i++)
        {
            dp[score]+=solve(dp,n,k,maxpts,score+i);
        }
        return dp[score]/=maxpts;
        
    }
    double new21Game(int n, int k, int maxPts) {
        vector<float> dp(k+maxPts+1, -1);
        return solve(dp,n,k,maxPts,0);

    }
};
int main()
{
    









return 0;
}