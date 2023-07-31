#include<iostream>
using namespace std;
class Solution {
public:
    int numTrees(int n) {
        if(n<=1) return 1;
        int count =0;
        for (int i = 1; i <=n; i++) count=count+numTrees(i-1)*numTrees(n-i);
        return count;        


            
    }
};
int main()
{
    









return 0;
}