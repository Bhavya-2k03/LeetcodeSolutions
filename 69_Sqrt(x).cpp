#include<iostream>
using namespace std;
class Solution {
public:
    int binary(int left, int right, int &num)
    {
        if(left<right)
        {
            int mid=left+(right-left)/2;
            if(mid*mid<num) return (mid, right, num);
            else if (mid*mid>num) return (left , mid-1, num);
            else return mid;
        }
        return left;
    }
    int mySqrt(int x) {
        return binary(1,x/2,x);
    }
};



int main()
{
    









return 0;
}