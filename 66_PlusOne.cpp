#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry =0;
        int n=digits.size();
        int temp=digits[n-1]+1;

        carry=temp/10;
        digits[n-1]=temp%10;
        int i=1;
        while(carry && i<n)
        {
            int temp=digits[n-i-1]+carry;
            digits[n-i-1]=temp%10;
            carry=temp/10;
            i++;
        }
        while(carry)
        {
            digits.insert(digits.begin(),carry%10);
            carry/=10;
        }
        return digits;
        
    }
};
int main()
{









return 0;
}