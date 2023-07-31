#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int binary(int left, int right, int i, vector<int> &potions, long long success)
    {
        if(left<right)
        {
            // cout<<left<<" "<<right;
            int mid =left+(right-left)/2;
            // cout<<"mid is"<<mid<<" ";
            long long temp=(long long )potions[mid]*i;
            // cout<<temp<<endl;
            if(temp>=success) 
            {
                return binary(left,mid,i,potions,success);
                // cout<<"yeh";
            }
            else return binary(mid+1,right,i,potions,success);
        }
        if((long long)potions[left]*i<success) 
        {   
            // cout<<"hi";
            return 0;
        }
        return potions.size()-left;
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int> res;
        for (int i=0; i<spells.size(); i++) res.push_back(binary(0,potions.size()-1,spells[i],potions,success));
        return res;
    }
};
int main()
{
    









return 0;
}