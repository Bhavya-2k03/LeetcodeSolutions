#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==1) return {{1}};
        else if(numRows==2) return {{1},{1,1}};
        vector<int> temp{1,1};
        vector<vector<int>> ans {{1},{1,1}};
        for (int i = 2; i<numRows; i++)
        {
            vector<int> vec{1};
            for (int j = 0; j < temp.size()-1; j++)
            {
                vec.push_back(temp[j]+temp[j+1]);
            }
            vec.push_back(1);
            ans.push_back(vec);
            temp=vec;
        }
        return ans;
    }
};
int main()
{
    









return 0;
}