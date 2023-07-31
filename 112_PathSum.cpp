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
    bool val=false;
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return false;
        // {
        //     if (targetSum==0)  return true;
        //     return false;
        // }
        if(!(root->left) && !(root->right))
        {
            if (targetSum==root->val)  return true;
            return false;
        }

        val=hasPathSum(root->left,targetSum-root->val);
        if (val==true) return true;
        val=hasPathSum(root->right,targetSum-root->val);

        return val;

    }
};
int main()
{
    









return 0;
}