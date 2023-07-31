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
    void dfs(TreeNode *root1, TreeNode* root2, TreeNode* &newRoot)
    {
        if(!root1) newRoot= root2;
        else if (!root2) newRoot= root1;
        else if (root1 && root2) 
        {
            newRoot = new TreeNode(root1->val+root2->val);
            dfs(root1->left,root2->left,newRoot->left);
            dfs(root1->right,root2->right,newRoot->right);
        }

    } 
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
    
        TreeNode* newRoot;
        dfs(root1,root2,newRoot);
        return newRoot;
    }
};
int main()
{
    









return 0;
}