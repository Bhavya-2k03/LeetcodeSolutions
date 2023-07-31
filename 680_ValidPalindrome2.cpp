#include<iostream>
using namespace std;
class Solution {
public:
    bool validPalindrome(string s) {
        int flag=0, left, right;
        // for(int i=0, j=s.length()-1;i<=j;i++,j--)

        int l=0,r=s.length()-1;
        while(l<=r)
        {
            if(s[l]!=s[r])
            {
                // cout<<l<<" "<<r<<endl;
                int i1=l,i2=l+1,r1=r-1,r2=r;
                while(i1<=r1 && s[i1]==s[r1])
                {
                    i1++;
                    r1--;
                }

                while(i2<=r2 && s[i2]==s[r2])
                {
                    i2++;
                    r2--;
                }
                return i1>=r1 || i2>=r2;

            }
            l++;
            r--;
        }
        return true;
    }
};

int main()
{
    









return 0;
}