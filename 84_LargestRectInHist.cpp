#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxarea=0, area=0, i=0,tempI=0, flag=0, top_index =0, count=0;
        stack<pair<int,int>> stk;

        while(i!=heights.size())
        {

            // cout<<"i is "<<i<<"tempi  is"<<tempI<<endl;
            if(stk.empty() || stk.top().second<=heights[i]) 
            {
                if(flag==0)
                { stk.push({i,heights[i]});
                cout<<"Pushed index "<<i<<" having height "<<heights[i]<<endl;
                }
                else 
                {
                    stk.push({top_index,heights[i]});

                     cout<<"Pushed index "<<top_index<<" having height "<<heights[i]<<endl;
                    flag=0;
                }
                // stk.push({i-count,heights[i]});
                // cout<<"Pushed index "<<i-count<<" having height "<<heights[i]<<endl;
            }
            else if(stk.top().second>heights[i]) 
            {   
                // cout<<heights[i]<<endl;
                flag =1;
                count++;
                area=stk.top().second*(i-stk.top().first);
                maxarea=max(maxarea,area);
                top_index=stk.top().first;
                stk.pop();
                // tempI--;
                continue;
            }
            // tempI++;
            i++;
            count=0;

        }

        while(!stk.empty())
        {
            cout<<stk.top().first<<" "<<stk.top().second<<endl;
            // stk.pop();
            area =stk.top().second*(heights.size()-stk.top().first);
            maxarea=max(area,maxarea);
            stk.pop();
        }
        return maxarea;


    }
};
int main()
{
    

Solution s1;


vector<int> vec={3,6,5,7,4,8,1,0};
cout<<s1.largestRectangleArea(vec);







return 0;
}