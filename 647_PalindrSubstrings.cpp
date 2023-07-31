#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(string &s)
    {
        for(int i=0, j=0; i<=j; i++,j--) if(s[i]!=s[j]) return false;
        return true;
    }
    void recurse(string &s, int &count)
    {
        if(isPalindrome(s)) count++;

        for (int i = 1; i < s.length(); i++)
        {
            string str=s.substr(0,i);
            recurse(str,count);
        }
        

    }




    int countSubstrings(string s) {



    }
};

int main()
{
    









return 0;
}