#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    void backtrack(int start,int count,string s, vector<string> &res)
    {
        if(start==s.length()) return;
        if(count==3)
        {
            string str =s.substr(start);
            if((stoll(str)>255)) return;
            if(str.length()>3) return;
            if(str.length()==3 && stoll(str)<100) return;
            if(str.length()==2 && stoll(str)<10) return;
            res.push_back(s);
            return;
        }

        for (int i = start; i <= start+2; i++)
        {
            if(i>=s.length()) return;

            if(i==start+1 ) 
            {
                string str =s.substr(start,2);
                if(stoi(str)<10) return;
            }
            if(i==start+2)
            {
                string str=s.substr(start,3);
                if(stoi(str)>255) return;
            }

            s.insert(i+1,".");
            count++;
            backtrack(i+2,count,s,res);
            s.erase(s.begin()+i+1);
            count--;
        }
    }

    vector<string> restoreIpAddresses(string s) {
        vector<string> res;
        backtrack(0,0,s,res);
        return res;

    }
};
int main()
{
    









return 0;
}