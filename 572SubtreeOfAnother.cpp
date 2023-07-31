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
    bool temp =false;
    bool checksameTree(TreeNode*root, TreeNode*subroot)
    {
        if(!root && !subroot) 
        {
            temp =true;
            return true;
        };
        if((!root && subroot)||(root && !subroot)) return false;
        if(root->val!=subroot->val) return false;
        checksameTree(root->left,subroot->left) && checksameTree(root->right,subroot->right);
    }
    
    TreeNode *traverse(TreeNode* root,TreeNode* subroot)
    {
        if (!root) return NULL;

        if (root==subroot) 
        {
            checksameTree(root,subroot);
        };

        traverse(root->left,subroot);
        traverse(root->right,subroot);


    };
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // subroot=subRoot;
        traverse(root,subRoot);
        return temp;    
    }
};

int main()
{
    









return 0;
}