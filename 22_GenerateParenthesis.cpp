#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    void stringer( int Lbracketcount, int Rbracketcount, string t, int &n,vector<string> &ans)
    {
            if (Lbracketcount==Rbracketcount && Lbracketcount==n){
                ans.push_back(t);
                return;
            }

            if(Rbracketcount<Lbracketcount)
                stringer(Lbracketcount,Rbracketcount+1,t+')',n,ans);

            if(Lbracketcount<n)
                stringer(Lbracketcount+1,Rbracketcount,t+'(',n,ans);
    }

    vector<string> generateParenthesis(int n) {

        vector<string> ans;
        string x;

        int count=0;
        x='(';
    
        int Lbracketcount =1;
        int Rbracketcount =0;
    
            if(Rbracketcount<Lbracketcount)
                stringer(Lbracketcount,Rbracketcount+1,x+')',n,ans);

            if(Lbracketcount<n)
                stringer(Lbracketcount+1,Rbracketcount,x+'(',n,ans);

        return ans;
    }
};



int main()
{
    









return 0;
}