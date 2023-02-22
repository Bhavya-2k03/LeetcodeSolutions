#include<iostream>
#include<cstring>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
    
    // cout<<s<<endl;
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
    
    // string x;
    // for (int i = 0; i < s.size(); i++)
    // {
    
        
    // }
    
    cout<<s<<endl;

    // cout<<s;
    for (int i = 0,j= s.size()-1; i < s.size() && j>=0; i++)
    {
       if(s[i]!=s[j])
        return false;

        if (i>(s.size()/2)+1)
        break;

        j--;

    }
    

    return true;
    }
};



int main()
{
    

string name="A man, a plan, a canal: Panama";

string name2="0P";
Solution s1;
cout<<s1.isPalindrome(name2);






return 0;
}