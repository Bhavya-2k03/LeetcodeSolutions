#include<iostream>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        long exponent=abs(n);
        double result=1;
        for (int i = exponent; i >0; i/=2)
        {
            if(i%2)  result*=x;
            x*=x;
        }
        if(n<0) return 1/result;
        return result;

    }
};
int main()
{
    









return 0;
}