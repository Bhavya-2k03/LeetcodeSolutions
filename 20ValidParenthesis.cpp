#include<iostream>
#include<stack>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool isValid(string s) {

        unordered_map<char,char> match;
        match.insert({'}','{'});
        match.insert({']','['});
        match.insert({')','('});

        stack<char> ans;

        for (char i: s)
        {
            cout<<"currently at "<<i<<endl;
            if(i=='{'||i=='('||i=='[')
            ans.push(i);
            
            else
            {   
                if(ans.empty()||ans.top()!=match[i])
                return false;
                else

                ans.pop();
 
            }
            cout<<"size of stack is "<<ans.size()<<endl;
        }
        
        if(!ans.empty())
        return false;

        else
        return true;

    }
};    
int main()
{

string s="[";    
Solution s1;

cout<<s1.isValid(s);






return 0;
}