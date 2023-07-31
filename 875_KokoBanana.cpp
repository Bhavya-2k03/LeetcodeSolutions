#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<cmath>
using namespace std;
class Solution {
public:
    int check(vector<int>& piles, int x)
    {
        int hours=0;
        for (int i = 0; i < piles.size(); i++) 
        {hours=ceil(piles[i]/float(x))+hours;
        // cout<<"hours for x= "<<x<<" is "<<hours;
        }
        return hours;
    }



    int binarySearch(int left, int right, int &h, vector<int> &vec,vector<int>& piles, int minVal)
    {
        
        while(left<=right)
        {
            int mid=(left+right)/2;
            int hours =check(piles,mid);
            if(hours==h) 
            {
                minVal=min(minVal,mid);
                if(mid!=0) right= mid-1;
                else return minVal;
            }    
            else if(hours<h) right=mid-1;
            else left=mid+1;
        }
        return minVal;
    };





    int minEatingSpeed(vector<int>& piles, int h) {
        int k; 
        if(piles.size()==1)
        return piles[0];
        int minK=ceil(accumulate(piles.begin(),piles.end(),0)/float(h)); 
        // cout<<"hi";
        int maxK=*max_element(piles.begin(),piles.end());
        // cout<<"hey";
        // for (int i = minK; i < maxK; i++)
        // {
            // cout<<"mink is "<<minK;
        // }
        int minVal=maxK;
        vector<int> vec;
        for (int i = minK; i <= maxK; i++) vec.push_back(i);
        // cout<<"mink is "<<minK<<"maxk is "<<maxK;
        // for(auto i:vec) cout<<i<<" ";
        // cout<<endl;

        int left =minK;
        int right= maxK;



        return binarySearch(left ,right, h, vec, piles, minVal);
        



    }
};
int main()
{
    
Solution s1;

vector<int> vec={312884470};
int h=312884469;

cout<<s1.minEatingSpeed(vec,h);







return 0;
}