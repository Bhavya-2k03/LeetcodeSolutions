#include<iostream>
#include<vector>
#include<deque>
using namespace std;
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i=0;
        int carry=0;
        while (k||carry)
        {
            if(i<num.size()) 
            {
                int temp=num[num.size()-i-1]+k%10+carry;
                num[num.size()-i-1]=temp%10;
                carry=temp/10;
            }
            else
            {
                int temp=k%10+carry;
                num.insert(num.begin(),temp%10);
                carry=temp/10;
            }
            k/=10;
            i++;
        }
        return num;
    }
};
int main()
{
    









return 0;
}