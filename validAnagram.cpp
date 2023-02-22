#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>ans;
        if(s.length()!=t.length())
        {
            return false;
        }
        for (int i = 0; i < s.length(); i++)
        {   
                ans[s[i]]++;
        };
        
        unordered_map<int,int>ans2;
        for (int i = 0; i < t.length(); i++)
        {
                ans2[t[i]]++;
        }
        if (ans==ans2)
        {
        return true;
        }
        else 
        {
            return false;
        }
    }

};

int main()
{
    

Solution s1;

cout<<s1.isAnagram("bhavya","abhyav");

return 0;
}