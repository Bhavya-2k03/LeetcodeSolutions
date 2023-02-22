#include<iostream>
#include<vector>    
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {

    int temp;
    int left=0;
    int right=1;
    int profit=0;
    int min =prices[0];
    int maxprofit=0;
    // int count=0;
    while (right<prices.size())
    {
        // right++;
        if(prices[left]<min)
        {
            min=prices[left];
            // cout<<"min is "<<min<<endl;
        }
        profit=prices[right]-min;
        if(profit>maxprofit)
        {
            maxprofit=profit;
            // cout<<"max profit is "<<maxprofit<<endl;
        }
        // cout<<"left is "<<left <<" right is "<<right<<endl;
        left++;
        right++;

    }
        return maxprofit;
    }
};


int main()
{
    
vector<int>a={7,3,2,3,5,2,3,0,6};

Solution s1;

cout<<s1.maxProfit(a);
 
return 0;
}