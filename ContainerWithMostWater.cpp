#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right = height.size()-1;
        int MaxProduct=0;
        int min;
        while(left<right)
        {
            if(height[left]<=height[right])
            {
                min=height[left];
                int product=(right-left)*min;
                if (product>=MaxProduct)
                {
                    MaxProduct=product;
                }
                left++;
            }
            else
            {
                min=height[right];
                int product=(right-left)*min;
                if (product>=MaxProduct)
                {
                    MaxProduct=product;
                }
                right--;
            }
        };
    return MaxProduct;

    }
};
int main()
{
    
vector<int> a={1,8,6,9,5,14,8,7,2,5};      
Solution s1;
cout<<s1.maxArea(a);


return 0;
}