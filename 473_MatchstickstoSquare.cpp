#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool recurse(int index,int &target, vector<int> &sidelength, vector<int>& matchsticks)
    {
        if(index==matchsticks.size())
        {
            for (int i = 1; i < sidelength.size(); i++)
            {
                if(sidelength[i]!=sidelength[i-1]) return false;
            }
            return true;
        }

        for (int i = 0; i < sidelength.size(); i++)
        {
            if(sidelength[i]+matchsticks[index]>target) continue; //To decrease Runtime
            
            int j=i;               // To decrese Runtime 
            while(--j>=0) if(sidelength[i]==sidelength[j]) break; //dp
            if(j!=-1) continue;

            sidelength[i]+=matchsticks[index];
            if(recurse(index+1,target,sidelength,matchsticks))return true;
            else sidelength[i]-=matchsticks[index];
        }
        return false;
    }

    bool makesquare(vector<int>& matchsticks) {
        int sum=0;
        for(auto i:matchsticks) sum+=i;
        if(matchsticks.size()<4||sum%4) return false;
        int target=sum/4;
        vector<int> sidelength(4,0);
        int index=0;
        sort(matchsticks.rbegin(),matchsticks.rend()); // To avoid TLE (decrese runtime)
        return recurse(index,target,sidelength,matchsticks);
    }
};
int main()
{
    









return 0;
}