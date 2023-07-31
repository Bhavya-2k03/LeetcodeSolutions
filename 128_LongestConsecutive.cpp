#include<iostream>
#include<vector>
#include<set>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
        return 0;
        
        if(nums.size()==1)
        return 1;

        set<int> a;
        for(auto i: nums) {a.insert(i);}
        
   
        


        vector<int> vec;
        for (auto i: a)
        {
            vec.push_back(i);
            // cout<<i;
        }

        int x=0;
      //   cout<<endl;
        int count =1;
        int maxcount =1;
        while(x!=vec.size()-1)
        {
            // cout<<endl<<"at x= "<<x<<" current element: "<<vec[x]<<" current count: "<<count<<endl;
            if(vec[x+1]==vec[x]+1)
            {   
                count++;
                x++;

                if(count>maxcount)
                    maxcount=count;
            }
            else
            {
                count=1;
                x++;
            }
            // cout<<endl<<"at x= "<<x<<" current element: "<<vec[x]<<" current count: "<<count<<endl;
        }

    return maxcount;



    }
};
int main()
{
    
Solution s1;

vector<int> nums={0};
cout<<s1.longestConsecutive(nums);








return 0;
}

