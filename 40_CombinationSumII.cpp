#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
        void Backtrack(vector<int>& candidates, int x, int target,  vector<vector<int>> &vecs, vector<int> &vec )
    {
        if (target==0) 
        {
            vecs.push_back(vec);
            return;
        }
        else if(target<0) return;
        for (int i = x; i < candidates.size(); i++)
        {
            target=target-candidates[i];
            vec.push_back(candidates[i]);
            Backtrack(candidates,i,target,vecs,vec);
            target=target+vec.back();
            vec.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> vecs;
        vector<int> vec;
        Backtrack(candidates,0,target,vecs,vec);
        return vecs;
    }
};

int main()
{
    









return 0;
}