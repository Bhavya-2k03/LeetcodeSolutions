#include<iostream>
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
    int temp=INT_MAX;
    int prev=INT_MAX;
    int flag=0;
    int minDiffInBST(TreeNode* root) {
        if(!root) return -1;
        minDiffInBST(root->left);
        if(flag==1)
        {
        int tem=root->val-prev;
        if(tem<temp) temp=tem;
        cout<<tem;
        }
        prev=root->val;
        flag=1;
        
        minDiffInBST(root->right);
        return temp;


    }
};
int main()
{
    









return 0;
}