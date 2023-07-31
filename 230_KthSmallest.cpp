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
    int count=0;
    int val;
    TreeNode* inorder(TreeNode*root, int &k )
    {
        if (!root || count==k) return NULL;

        inorder(root->left,k);
        // if(count==k) return NULL;
        val=root->val;
        count++;
        inorder(root->right,k);


    }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root,k);
        return val;



    }
};
int main()
{
    









return 0;
}