#include<iostream>
#include<vector>
#include<unordered_set>
#include<cstring>
#include<unordered_map>
using namespace std;

vector<string>final;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
    vector<unordered_map<char,int>> ans;
    
    // int count=0;
    int y=0;
    for (auto x: ans)
    {       
            for (int i = 0; i < strs[y].length(); i++)
            {
                x[strs[y][i]]++;
            }
            x['!']=y;
            y++;
    };

    vector<string> a;
    unordered_map<unordered_map<char,int>,vector<string>>Fmap;
    for (int i = 0; i < ans.size(); i++)
    {
        a.push_back(strs[ans[i]['!']]);
        Fmap.insert({ans[i],a});

    }
    
    vector<vector<string>> final;
    for (auto i:Fmap)
    {
        // cout<<i.second;
        final.push_back(i.second);
    }
    
    return final;








    }
};    



int main()
{
    









return 0;
}