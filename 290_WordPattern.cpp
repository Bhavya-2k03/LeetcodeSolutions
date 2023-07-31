#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> m;
        unordered_map<string, char> m2;
        int x=0;

        for (int i = 0; i < pattern.size(); i++)
        {
            
            string t="";
            while(x<s.size() && s[x]!=' ')
            {
                t+=s[x];
                x++;
            }
            x++;
            if(m2.find(t)!=m2.end()) 
            {
                if(m2[t]!=pattern[i]) return false;
            }
            else m2[t]=pattern[i];
            
            if(m.find(pattern[i])!=m.end()) 
            {
                if(m[pattern[i]]!=t) return false;
            }
            else m[pattern[i]]=t;
        }
        if(x!=s.size()+1) return false;
        return true;
    }
};

int main()
{
    









return 0;
}