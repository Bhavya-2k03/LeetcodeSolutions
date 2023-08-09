#include<iostream>
#include<unordered_set>
#include<vector> 
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> row,col;
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[i].size(); j++)
            {
                if(!(matrix[i][j]))
                {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(auto i=row.begin(); i!=row.end(); i++)
        {
            for(int x=0; x<matrix[*i].size(); x++)
            {
                matrix[*i][x]=0;
            }
        }

        for(auto i=col.begin(); i!=col.end(); i++)
        {
            for(int x=0; x<matrix.size(); x++)
            {
                matrix[x][*i]=0;
            }
        }
        

    }
};
int main()
{
    









return 0;
}





