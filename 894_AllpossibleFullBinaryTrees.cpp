#include<iostream>
#include<vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    vector<TreeNode*> allPossibleFBT(int n) {
        if (n==1) return {new TreeNode()};
        else if(n%2==0) return {NULL};
        for (int i = 0; i < n-1; i++)
        {
            
        }
        



    } 
};
int main()
{
    









return 0;
}