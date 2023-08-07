#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int l=0,r=n-1,top=0,bottom=n-1;
        while (l<r)
        {
            for (int i = 0; i < n-1; i++)
            {
                int temp=matrix[top][l+i];
                matrix[top][l+i]=matrix[bottom-i][l];
                matrix[bottom-i][l]=matrix[bottom][r-i];
                matrix[bottom][r-i]=matrix[top+i][r];
                matrix[top+i][r]=temp;
            }
            l++;
            r--;
            top++;
            bottom--;
            n=n-2;
        }
    }
};
int main()
{
    









return 0;
}