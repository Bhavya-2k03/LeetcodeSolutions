#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        if(wordDict.empty()) return false;
        vector<bool> dp(s.size()+1,false);
        dp[0]=true;

        for (int i = 1; i <= s.size(); i++)
        {
            for (int j = i-1; j >= 0; j--)
            {
                if(dp[j])
                {
                    string t=s.substr(j,i-j);
                    if(find(wordDict.begin(),wordDict.end(),t)!=wordDict.end())
                    {
                        dp[i]=true;
                        break;
                    }
                }
            }
        }
        return dp[s.size()];
        

    }
};
int main()
{
    









return 0;
}