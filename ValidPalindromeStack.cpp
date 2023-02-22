#include<iostream>
#include<stack>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {

    stack<char>a;
        for (int i = 0; i < s.size(); i++)
    {
        s[i]=tolower(s[i]);
        if( s[i]<'0' || (s[i]<'A' && s[i]>'9') || ( s[i]>'Z' && s[i]<'a') || s[i]>'z' )
        {
            // cout<<s[i];
            s.erase(i,1);
            i--;
        }
    }

    cout<<s;
    if(s.size()%2==0)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (i<s.size()/2)
            a.push(s[i]);

            else
            {

                cout<<a.top()<<endl;
                
                if(a.top()!=s[i])
                {
                    return false;
                }
                a.pop();
            }
        }
    }

    else 
    {
        for (int i = 0; i < s.size(); i++)
        {
            // cout<<"tommy";
            if (i<s.size()/2)
            a.push(s[i]);

            
            else
            {   if(i==s.size()/2)
                {
                    continue;
                }
                cout<<a.top()<<s[i]<<endl;
       
                if(a.top()!=s[i])
                {

                    return false;
                }
                         a.pop();
            }
        }





    }


return true;

    }
};
int main()
{


    string name="A man, a plan, a canal: Panama";

string name2="ab";
Solution s1;
cout<<s1.isPalindrome(name2);










return 0;
}