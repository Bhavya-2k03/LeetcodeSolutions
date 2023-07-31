#include<iostream>
// #include<set>
#include<unordered_map>
#include<cstring>
#include<vector>

using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> m;
        unordered_map<char,int> curr;
        int have=0;
        int need=t.length();    
        // set<char> s;
        for(char i:t){m[i]++;}

        int left=0;
        int right=0;
        // int pickIndex =1;
        // vector<int> index;

        // m.find('c');
        int finalLeft;
        int finalRight;
        while(true)
        {
            if(t.find(s[right])!=string::npos)
           {
                // index.push_back(right);
                curr[s[right]]++;
                
                if(curr[s[right]]>=m[s[right]])
                    {
                        have++;
                        if(have>=need)
                        {
                            finalLeft=left;
                            finalRight=right;
                            while (have>=need)
                            {
                                curr[s[left]]--;
                                if(curr[s[left]]<m[s[left]])
                                have--;
                            }
                            
                        }
                    }
                right++;
           }
            else if(left=right)
            {
                left++;
                right++;
            }
            else 
            right++;

            if(have>=need && right==s.length())
            return 

        }


    }
};




int main()
{
    









return 0;
}