#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
class Solution {
public:
int lengthOfLongestSubstring(string s) {
        vector<int> vec(256,-1);
    int start =-1;
    int maxlength=0;
    for (int i = 0; i < s.size(); i++)
    {
        if (vec[s[i]]>start)
        start=vec[s[i]];
        
        vec[s[i]]=i;
        maxlength=max(maxlength,i-start);
    }
    return maxlength;
    };

};
int main()
{

    











return 0;
}