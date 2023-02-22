#include<iostream>
#include<vector>
#include<set>
using namespace std;



class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
    

        vector<int> ans;

        for (int left = 0,right=numbers.size()-1; left < right; left++,right--)
        {
            int x=left;
            int y=right;
            while(x<y)
            {   
                int sum = numbers[x]+numbers[y];
                cout<<sum<<endl;
                if (sum==target)
                {   ans.push_back(x+1);
                    ans.push_back(y+1);
                    return ans;
                }
                else if(sum>target)
                {
                    // cout<<sum<<endl;
                y--;
                }
                else
                x++;

            }
        };

    return ans;
    }
};
int main()
{
    
vector<int> a={2,7,11,15},b;

int target =9;
Solution s1;
b=s1.twoSum(a,target);

for(int i:b)
cout<<i<<endl;







return 0;
}