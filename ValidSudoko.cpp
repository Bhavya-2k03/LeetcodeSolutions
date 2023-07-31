// #include<iostream>
// // #include<vector>
// #include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isduplicate(vector<string>& ele)
    { 
        unordered_map<string,int> m;

        for (int i = 0; i < ele.size(); i++)
        {
            if(ele[i]>'0' && ele[i]<='9')
            {
                m[ele[i]]++;
            if(ele[i]>1)
            {
                return true;
            }
            }
        }
        
    return false;

    }

    bool isValidSudoku(vector<vector<string>>& board) {

        for (int i = 0; i < board.size(); i++)
        {
            bool value;

            value=isduplicate(board[i]);
            if(value=true)
            {
                return false;
            }
        }


        

            // vector<int> a;
            // int x=0;
            for (int y = 0; y < 9; y++)
            {
                // a.pushback([]);
            bool value;
            vector<string> a;
            for (int i = 0; i < board.size(); i++)
            {
                a.push_back(board[i][y]);
            }
            value=isduplicate(a);
            if(value=true)
            {
                return false;
            }
            }
        
        return true;
        
        




    }
};
int main()
{


vector<vector<string>> vec;
// vec.push_back(["5","3",".",".","7",".",".",".","."],["6",".",".","1","9","5",".",".","."],[".","9","8",".",".",".",".","6","."],["8",".",".",".","6",".",".",".","3"],["4",".",".","8",".","3",".",".","1"],["7",".",".",".","2",".",".",".","6"],[".","6",".",".",".",".","2","8","."],[".",".",".","4","1","9",".",".","5"],[".",".",".",".","8",".",".","7","9"])
//    solution s1; 

vector<string> a={'5','3','.','.','7','.','.','.','.'};


cout<<"hello";




return 0;
}