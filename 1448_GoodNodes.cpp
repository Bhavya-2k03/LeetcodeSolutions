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
    int count=1;
    TreeNode* dfs(TreeNode* root,int max_val)
    {
        if(!root) return root;
        int max2=max(max_val,root->val);
        if (root->val>=max2) count++;
        
        dfs(root->left, max2);
        dfs(root->right, max2);

        // if(root->val>max) int max_val=root->val;

        return root;
        

    }


    int goodNodes(TreeNode* root) {
        
        dfs(root,root->val);

        return count;

    }
};
int main()
{
    









return 0;
}