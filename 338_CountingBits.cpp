#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for (int i = 0; i <= n; i++)
        {
            int count=0;
            int y=i;
            while(y)
            {
                if(y%2) count++;
                y/=2;
            }
            ans.push_back(count);
        }
    return ans;
    }
};
int main()
{
    









return 0;
}