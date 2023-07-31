#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> a;
        vector<int> ans;
        int i = temperatures.size()-1;
        while(i!=-1)
        {
            // cout<<i<<endl;
            if(a.empty())
            {
            ans.push_back(0);
            a.push(i);
            i--;
            continue;
            }
            if(temperatures[a.top()]>temperatures[i])
            {
                ans.push_back(a.top()-i);
                a.push(i);
                i--;
            }
            else
            {
                a.pop();
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;


    }
};
int main()
{
    
Solution s1;

vector<int> a{30,40,50,60};
vector<int> b;

b=s1.dailyTemperatures(a);

// for (auto i: b)
// {
//     cout<<i<<endl;
// }

for (int i = 0; i < b.size(); i++)
{
    cout<<b[i]<<" ";
}






return 0;
}