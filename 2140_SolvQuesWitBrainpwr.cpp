#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    long long solve(vector<vector<int>>& questions, vector<int> &dp, int index)
    {
        if(index==questions.size()) return 0;
        if(dp[index]!=-1) return dp[index];

        int take=questions[index][0]+solve(questions,dp,index+questions[index][1]+1);
        int dontake=solve(questions,dp,index+1);
        return max(take,dontake);

    }
    long long mostPoints(vector<vector<int>>& questions) {
        vector<int> dp(questions.size(),-1);
        return solve(questions,dp,0);
    }
};
int main()
{
    









return 0;
}