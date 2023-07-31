#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    string ans="";
    void backtrack(string &s,vector<string> &vec, vector<string>&nums)
    {
    if(s.length()==nums.size())
    {
        for(auto i:nums) if (i==s) return;
        ans=s;
        return; 
    }

    for (int i = 0; i <vec.size(); i++)
    {
        s+=vec[i];
        backtrack(s,vec,nums);
        if(ans!="") return;
        s.pop_back();
    }
    

    }
    string findDifferentBinaryString(vector<string>& nums) {
        vector<string> vec;
        string s="";
        vec.push_back("0");
        vec.push_back("1");
        backtrack(s,vec,nums);
        return ans;
    }
};
int main()
{
    








return 0;
}