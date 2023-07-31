#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    void backtrack(string &digits, int index, string s,unordered_map<char,string> &m, vector<string> &vec)
    {
        if(s.length()==digits.length() && !s.empty()) vec.push_back(s);
        if(index==digits.size()) return;

        for(int i=0; i<m[digits[index]].length(); i++)
        {
            s+=m[digits[index]][i];
            backtrack(digits,index+1,s,m,vec);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string> m;
        
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";

        vector<string> vec;
        backtrack(digits,0,"",m,vec);
        return vec;
    }
};
int main()
{
    









return 0;
}