#include<iostream>
using namespace std;
class Solution {
public:
    bool detectCapitalUse(string word) {
        int count=0;
        for(int i=0; i<word.size(); i++)
        {
            if(word[i]>='A' && word[i]<='Z') count++;
        }
        if(!count || count==word.length()) return true;
        if(count==1 && word[0]>='A' && word[0]<='Z') return true;

        return false;

    }
};
int main()
{
    









return 0;
}