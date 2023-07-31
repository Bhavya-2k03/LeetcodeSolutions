#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
class Solution {
public:
    bool backtrack(vector<vector<char>>& board, string word, int i, int j)
    {
        if(word.empty()) return true;
        if(i<0||j<0||i>board.size()-1||j>board[0].size()-1) return false;
        if(board[i][j]!=word.front()) return false;
        // if(board[i][j]==word.front())
        // {
            board[i][j]='@';
            char temp=word.front();
            word.erase(word.begin());
            if(backtrack(board,word,i-1,j)||backtrack(board,word,i+1,j)||backtrack(board,word,i,j-1)||backtrack(board,word,i,j+1))
            {
                word.insert(0,1,temp);
                board[i][j]=temp;
                return true;
            }
            word.insert(0,1,temp);
            board[i][j]=temp;
        // }
            return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0; i<board.size(); i++)
        {
            for(int j=0; j<board[0].size(); j++) if(backtrack(board,word,i,j)) return true;
        }
        return false;


    }
};



int main()
{
    









return 0;
}