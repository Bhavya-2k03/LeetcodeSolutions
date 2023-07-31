#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
    int l=0,r=0;
    void helper(int left, int right,string s, int &maxlen ,string &strMax)
    {        
        while(left>=0 && right<= s.size()-1 && s[left]==s[right])
        {
            // string str=s.substr(left,right-left+1);
            if(right-left+1>maxlen)
            {
                maxlen=right-left+1;
                l=left;
                r=right;
                // strMax=s.substr(left,right-left+1);
            }
            left--;
            right++;
        }
    }

    string longestPalindrome(string s) {
        if(s.length()<=2)
        {
            if(s.length()==2 && s[0]==s[1]) return s;
            else return s.substr(0,1);
        }

        int maxlen=1;
        string strMax=s.substr(0,1);
        // odd case
        for (int i = 1; i < s.length()-1; i++) helper(i-1,i+1,s,maxlen,strMax);
        if(maxlen==s.length()) return s.substr(l,r-l+1);
        // even case
        for (int i = 0; i <s.length()-1 ; i++) helper(i,i+1,s,maxlen,strMax);
        return s.substr(l,r-l+1);
        
    }
};
int main()
{
    









return 0;
}