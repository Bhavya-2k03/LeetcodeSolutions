#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int count(string s)
    {
        int cnt=0;
        for(auto i:s) if(i=='0') cnt++;
        return cnt;
    }
    int solve(vector<string>& strs, vector<vector<vector<int>>> &dp, int &m, int &n, int zero_cnt, int one_cnt, int index)
    { 
       if(zero_cnt>m || one_cnt>n) return -1;
       if(zero_cnt==m && one_cnt ==n ) return 0;
       if(index==strs.size()) return 0;
       if(dp[zero_cnt][index][one_cnt]!=-1) return dp[zero_cnt][index][one_cnt];
       int zero=count(strs[index]);
       int one=strs[index].size()-zero;
       int take=1+solve(strs,dp,m,n,zero_cnt+zero,one_cnt+one,index+1);
       int dontake=solve(strs,dp,m,n,zero_cnt,one_cnt,index+1);
       return dp[zero_cnt][index][one_cnt]=max(take,dontake);

    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<vector<int>>> dp(m+1, vector<vector<int>> (strs.size(), vector<int> (n+1,-1))); 
        return solve(strs,dp,m,n,0,0,0);
    }
};
int main()
{
    









return 0;
}