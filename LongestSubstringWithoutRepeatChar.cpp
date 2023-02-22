#include<iostream>
#include<unordered_set>
#include<cstring>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    
    unordered_set<int> ans;
    int left=0;
    int right=1;
    int count=1;
    int maxcount=0;
    // int flagforfirstItr=0;
    cout<<"Start of program"<<endl;
    cout<<"Length of the string is "<<s.length()<<endl;
    
    if(s.length()==0)
    return 0;
    if(s.length()==1)
    return 1;
    ans.insert(s[left]);
    while(right!=s.length())
    {
        if(ans.find(s[right])==ans.end())
        {
            cout<<"Left is pointing to element "<<s[left]<<endl;
            cout<<"right is pointing to element "<<s[right]<<endl;
            cout<<"hello"<<endl;
        ans.insert(s[right]);
        count++;
        
        }
        else
        {
            cout<<"hi"<<endl;
            left++;
            right=left+1;
            count=1;
            ans.clear();
            ans.insert(s[left]);
            cout<<"Left is pointing to element "<<s[left]<<endl;
            cout<<"right is pointing to element "<<s[right]<<endl;
            cout<<"right is at "<<right<<endl;
            if(count>maxcount)
            maxcount=count;
            cout<<"Iteration ended"<<endl;
            continue;

        }
        if(count>=maxcount)
        maxcount=count;

        cout<<"right is at "<<right<<endl;
        cout<<"current count is "<<count<<endl;
        right++;

        cout<<"Iteration ended"<<endl;


    }
   return maxcount;
        
    }
};
int main()
{
    
    string s="";

    Solution s1;

    cout<<s1.lengthOfLongestSubstring(s);










return 0;
}