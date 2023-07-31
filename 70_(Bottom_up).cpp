#include<iostream>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
     int a=1, b=2, c;
     if(n<=2) return n;
     while(n>2)
     {
         c=a+b;
         a=b;
         b=c;
         n--;
     }
     return c;
    }
};
int main()
{
    









return 0;
}