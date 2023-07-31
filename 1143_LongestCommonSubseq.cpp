#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int isPresent(char x, string &text1, int &ind)
    {
        for (int i = ind; i < text1.size(); i++)
        {
            if(text1[i]==x) return i;
        }
        return 0;
        
    }
    
    int solve(vector<vector<int>> &dp,string &text1, string &text2, int t1_ind, int curr_ind)
    {
        if(curr_ind==text2.size()) return 0;
        if(dp[t1_ind][curr_ind]!=-1) return dp[t1_ind][curr_ind];
        int take=0;
        int y=isPresent(text2[curr_ind],text1,t1_ind);
        if(y)
        {
            take=1+solve(dp,text1,text2,y+1,curr_ind+1);
        }
        int dontake=solve(dp,text1,text2,t1_ind,curr_ind+1);
        return dp[t1_ind][curr_ind]=max(take,dontake);
        
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp (text1.size(),vector<int> (text2.size(),-1));
        return solve(dp,text1,text2,0,0);
        
    }
};
int main()
{
    









return 0;
}