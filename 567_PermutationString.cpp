#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        // for(int i=0; i<s1.length(); i++) {m1[s1[i]]++;}
        for(auto i: s1) {m1[i]++;}

        m2=m1;
        
        int left=0;
        int right=0;
        int flag=0;

        while (right!=s2.length())
        {
            auto itr=m1.find(s2[right]);
            
            if(itr!=m1.end())
            {   
                flag++;
                if(flag==1)
                left=right;

                itr->second--;
                if(itr->second==0)
                m1.erase(itr);
            }
            else
            {
                if (flag>0)
                {
                    right=left;
                }
                flag=0;
                m1=m2;
            }

            if (flag ==s1.length()) 
            return true;
           
            right++;
        }
        
        return false;

    }
};




int main()
{
    
string s1="adc", s2="dcda";

Solution s;
cout<<s.checkInclusion(s1,s2);








return 0;
}