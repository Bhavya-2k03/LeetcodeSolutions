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
    TreeNode* temp;
    void dfs(TreeNode* root)
    {
        if(!root) root=temp;
        else dfs(root->right);
    }
    TreeNode* trimBST(TreeNode* &root, int &low, int &high) {
        if(!root) return NULL;
        else if( root->val<low || root->val>high)
        {
            if(!root->right && !root->left) root=NULL;
            else if(!root->right && root->left) root=root->left;
            else if (root->right && !root->left) root=root->right;
            else
            {
                temp=root->right;
                root=root->left;
                dfs(root->right);
            }
        }
        trimBST(root->left,low,high);
        trimBST(root->right,low,high);
        return root;
    }
};
int main()
{
     









return 0;
}