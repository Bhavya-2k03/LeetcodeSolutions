#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>m;

        for(auto i:text) m[i]++;
        string s="balloon";
        int x=0,count=0;

        while(true)
        {
            if(!m[s[x]]) break;
            else m[s[x]]--;
            x++;
            if(x==s.size())
            {
                count++;
                x=0;
            } 
        }
    return count;
    }
};
int main()
{
    









return 0;
}