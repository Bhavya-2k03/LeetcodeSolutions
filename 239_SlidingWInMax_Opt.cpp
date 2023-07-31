#include<iostream>
#include<vector>
#include<deque>
using namespace std;
class Solution {
public:
vector<int> maxSlidingWindow(vector<int>& nums, int k) {

    if(k==1) return nums;
vector<int> ans;
deque<int> deq;

int left =0;
// int right =k-1;
int right =1;
// int x=

        deq.push_back(nums[0]);
        
        // if(deq.)
        while(right!=k-1)
        {
            if(deq.empty())
            {
                deq.push_back(nums[right]);
            }
            else if(nums[right]>deq.back())
            {
                deq.pop_back();
                continue;
            }
            else  
            {
                deq.push_back(nums[right]);
            }

            // for (auto i: deq)
            // {
            //     cout<<i<<" ";
            // }
            
            right++;
            // cout<<endl;
        }

        while(right!=nums.size())
        {

            if(deq.empty()) deq.push_back(nums[right]);

            else if(nums[right]>deq.back())
            {
                deq.pop_back();
                continue;
            }

            else deq.push_back(nums[right]);


        

            // for (auto i: deq)
            // {
            //     cout<<i<<" ";
            // }
            ans.push_back(deq.front());
            
            if(nums[left]==deq.front())  deq.pop_front();
            
            right++;
            left++;


        }
        // for (auto i: ans)
        // {
        //     cout<<i<<" ";
        // }
        
        // return ans;

}
};

int main()
{
    
Solution s1;

vector<int> vec={1,2};
s1.maxSlidingWindow(vec,2);








return 0;
}