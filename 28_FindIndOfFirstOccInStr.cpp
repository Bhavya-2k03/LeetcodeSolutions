#include<iostream>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int i = 0; i < haystack.size(); i++)
        {
        int flag=0;
            if(haystack[i]==needle[0])
            {
                int x=i;
                for (int y = 0; y < needle.size(); y++)
                {
                    if(haystack[x]!=needle[y]) {
                        flag=1;
                        break;
                    }
                    x++;

                }
                if(!flag) return i;
                
            }
        }
        return -1;        

    }
};
int main()
{
    









return 0;
}