#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
class Solution {
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
    unordered_set<int> s;
    for (int i = 0; i < hasApple.size(); i++) if(hasApple[i]==true) s.insert(i);
    int count =0;
    for(auto y:s)
    {
        for(auto i:edges) 
        {
            if(i[1]==y)
            {
                s.insert(i[0]);
                count++;                
            }             
        }
    }
    return 2*count;
    }
};
int main()
{
    

return 0;
}