#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        int box[10][10]={0};
        unordered_map<int,int> coloumn;
        unordered_map<int,int> row;
        
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                if(board[i][j] != '.')
                {

                    int k=i/3 *3 +j/3, num=board[i][j]-'0';
                    // cout<<num<<endl;
                    box[k][num]++;

                    if(box[k][num]>1) 
                    {
                        // cout<<"Due to box, error detected at element i="<<i<<j;
                        return false;
                    }

                    row[num]++;
                    if(row[num]>1) 
                    {
                        // cout<<"due to row";
                        return false;
                    }
                }
            }
            row.clear();          
        }
        
        for (int i = 0; i < board[0].size(); i++)
        {
            for (int j = 0; j < board.size(); j++)
            {
                if(board[j][i] != '.')
                {   
                    int num=board[j][i]-'0';
                    coloumn[num]++;
                    cout<<num<<" "<<coloumn[num]<<endl;
                    if(coloumn[num]>1)
                    return false;
                }
            }
            coloumn.clear();          
        }
    return true;
    }
};
int main()
{


// Solution s1;

// s1.isValidSudoku()







return 0;
}