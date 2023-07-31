#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    int solve(string &s, int index, vector<int>&dp)
    {
        if(index>=s.length()) return 1;
        if(dp[index]!=-1) return dp[index];
        if(stoi(string(1,s[index]))==0) return dp[index]=0; 

        int doubletake=0;
        if(index!=s.length()-1)
        {
            if(stoi(s.substr(index,2))<=26)
            {
                doubletake=solve(s,index+2,dp);
            } 
        }
        int singletake=solve(s,index+1,dp); 

        return dp[index]=singletake+doubletake;

    }
    int numDecodings(string s) {
        vector<int>dp (s.length()+1,-1);
        return solve(s,0,dp);

    }
};
int main()
{
    









return 0;
}