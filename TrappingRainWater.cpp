#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
     int trap(vector<int>& height) 
    {
        int left =0;
        int right= 0;
        int sum =0;
        int difference;
        int water=0;
        int count =0;
        while(true)
        {   
            if(height.size()<=1)
            break;
            // if(left=right=)
            cout<<"The left is at "<<left<<" The right is at "<<right<<endl;
            if((left==right) && (left==(height.size()-1)))
            {
                cout<<"Size of height is "<<height.size()<<endl;
                cout<<"hello";
                break;
            }
           

            if(height[left]<=height[left+1])
            {
                left++;
                right++;
                // sum=sum+right;
                continue;
            }
            right++;
            if(right==height.size())
            {
                cout<<"Currently, water is "<<water;
                // // cout<<left;
                // break;

                // // left++;
                int temp=left;
                sum=0;
                cout<<"temp is"<<temp<<endl;
                right=height.size()-1;
                left=right;
                cout<<"second while started"<<endl;
                while (true)
                {   
                    if(right==temp)
                    break;
                    cout<<"The left is at "<<left<<" The right is at "<<right<<endl;
                    if(right==temp)
                    break;
                    if(height[right]<=height[right-1])
                    { 
                        left--;
                        right--;
                        // sum=sum+right;
                        continue;
                    }
                    left--;
                    
                    if(height[left]>=height[right])
                    {
                    difference=right-left-1;
                    cout<<"Difference is"<<difference<<endl;
                    water=water+height[right]*difference-sum;
                    cout<<"water is "<<water<<endl;
                    sum=0;
                    right=left;
                    
                    cout<<"right is "<<right<<" left is"<<left;

                    // left++;
                    continue;
                    
                    // cout<<water<<endl;
                    }
                    sum=sum+height[left];

                    cout<<endl<<"sum is "<<sum;

                             
                    // count++;
                    // if(count>20)
                    // break;
                }
                
                break;
            }
            
            if(height[right]>=height[left])
            {
                difference=right-left-1;
                water=water+height[left]*difference-sum;
                left=right;
                sum=0;
                // left++;
                continue;
                cout<<water<<endl;
            }
            sum=sum+height[right];
            
            if(left==height.size()-1)
            break;
         
            // count++;
            // if(count>20)
            // break;
        }

        // int temp=left;


    return water; 
    }
};



int main()
{

vector<int> a={5,5,9,3,2,3,1,4,0,4,2,0,6,0,6,4,0,7,1,7,4,0,8,3,0,0,4};
Solution s1;
int x;
x=s1.trap(a);
cout<<"X is "<<x;

return 0;
}