#include<iostream>
#include<vector>
#include<unordered_set>
#include<cstring>
#include<unordered_map>
#include<algorithm>

using namespace std;


 
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string,vector<string>>m;
    for (int i = 0; i < strs.size(); i++)
    {   
        string t= strs[i];
        sort(strs[i].begin(),strs[i].end());
        m[strs[i]].push_back(t);
    }
    vector<vector<string>> vec;

    for (auto i = m.begin(); i!= m.end(); ++i)
    {
        vec.push_back(i->second);
    }
    
    
    return vec;

    }
};    



int main()
{
    
// vector<string> s={"eat","tea","tan","ate","nat","bat"};
// Solution s1;
// vector<vector<string>> g;
// g=s1.groupAnagrams(s);

// for (int i = 0; i < g.size(); i++)
// {
    
// }









return 0;
}