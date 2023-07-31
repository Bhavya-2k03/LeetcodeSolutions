#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        int bcount=0;
        int left=0, right=people.size()-1;

        sort(people.begin(),people.end());
        
        while(left<right)
        {
            if(people[left]+people[right]>limit) 
            {
                right--;
                bcount++;
            }
            else
            {
                left++;
                right--;
                bcount++;
            }
        }

    if(left==right) return bcount+1;
    return bcount;

    }
};
int main()
{
    









return 0;
}