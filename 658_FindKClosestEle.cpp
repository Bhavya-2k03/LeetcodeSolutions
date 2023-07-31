#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int right=0;
        while(right<arr.size())
        {
            if(arr[right]==x) break;
            else if(arr[right+1]>x) break;
        }
       



    }
};
int main()
{
    









return 0;
}