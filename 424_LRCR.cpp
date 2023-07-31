#include<iostream>
using namespace std;
class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0;
        int right=1;
        int length =0;
        int temp;
        while(right!=s.length())
        {
            if(s[right]==s[left])
            length++;
            else if(k!=0 && s[right]!=s[left])
            {
                k--;
                length++;
                temp= right;
            }



        }



    }
};



int main()
{
    










return 0;
}