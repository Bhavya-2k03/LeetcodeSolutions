#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int p1=0;
        unordered_map<char,char> m;
        while(p1<s.length())
        {
            if(m.find(t[p1])==m.end()) m[t[p1]]=s[p1];
            else 
            {
                if(m[t[p1]]!=s[p1] ) return false;
            }
            p1++;
        }
        m.clear();
        p1=0;
        
        while(p1<s.length())
        {
            if(m.find(s[p1])==m.end()) m[s[p1]]=t[p1];
            else 
            {
                if(m[s[p1]]!=t[p1] ) return false;
            }
            p1++;
        }
        return true;
    }
};
int main()
{
    









return 0;
}