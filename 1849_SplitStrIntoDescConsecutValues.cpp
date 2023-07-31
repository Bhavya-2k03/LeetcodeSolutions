#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool recurse(string &s, unsigned long long prev, int index, int count)
    {
        if(index==s.size())
        {
            return count>1;
        }
        
        unsigned long long num=0;
        for(int i=index; i<s.size(); i++)
        {
            num=num*10;
            num+=(s[i]-'0');
            if(prev-num==1|| prev==-1) if(recurse(s, num,i+1,count+1)) return true;
            else if(num>=prev && prev!=-1) break;
        }
        return false;

    }

    bool splitString(string s) {
        return recurse(s,-1,0,0);
        
    }
};
int main()
{
    









return 0;
}