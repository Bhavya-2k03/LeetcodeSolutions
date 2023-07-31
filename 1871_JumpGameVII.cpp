#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        if(s[s.length()-1]=='1') return false;
        queue<int> q;
        q.push(0);
        while(true)
        {
            if(s[q.front()]=='1') 
            {
                q.pop();
                continue;
            }
            int n=min(maxJump,(int)s.size()-2);
            for (int i = minJump; i <= n; i++)
            {
                q.push(q.front()+i);
                if(q.back()+i==s.size()-1) return true;
            }
            q.pop();
            if(q.front()>s.size()-1) break;
        }

    return false;
    }
};
int main()
{
    









return 0;
}