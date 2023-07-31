#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void backtrack(int s, int &n, int &k, vector<vector<int>> &vecs, vector<int> &vec)
    {
        if(vec.size()==k) 
        {
            vecs.push_back(vec);
            return;
        }
        else if(vec.size()>k) return;

        for (int i = s; i <= n; i++)
        {
            vec.push_back(i);
            backtrack(i+1,n,k,vecs,vec);
            vec.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> vecs;
        vector<int> vec;
        backtrack(1,n,k,vecs,vec);
        return vecs;
    }
};
int main()
{
    









return 0;
}