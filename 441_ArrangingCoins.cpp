#include<iostream>
using namespace std;
class Solution {
public:
    int arrangeCoins(int n) {
        int count=n;
        for (int i = 1; i <= count; i++)
        {
            n-=i;
            if(n==0) return i;
            else if(n<0) return i-1;
        }
        return n;
    }
};
int main()
{
    









return 0;
}