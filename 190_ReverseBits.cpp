#include<iostream>
using namespace std;
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int bits=32; //total number of bits in the input binary string
        uint32_t reverse=0; // new reverse number
        
        while(bits) // loop will run until bits !=0
        {
            uint32_t temp;
            if(n&1) temp=1; //extracting last bit of the number, it can either be one or zero
            else temp=0;
            n=n>>1;         // right shifting the number so that we can extract all bits one by one 
            reverse |= (temp<<(bits-1));   // to understand it, dry run this code for input = "1101" ,(its very simple to understand)
            bits--;
        }
        return reverse;
    }
};
int main()
{
    









return 0;
}