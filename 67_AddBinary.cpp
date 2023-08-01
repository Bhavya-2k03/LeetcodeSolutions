#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int maxlength=max(a.length(),b.length()), carry=0; 
        string sum="";       
        for (int i = 0; i < maxlength; i++)
        {
            int bit1= i>=a.length() ? 0:a[a.length()-i-1];
            int bit2= i>=b.length() ? 0:b[b.length()-i-1];
            
            int temp=bit1+bit2+carry;

            sum=to_string(temp%2)+sum;
            carry=temp/2;
        }
        return sum;
        
    }
};
int main()
{
    









return 0;
}