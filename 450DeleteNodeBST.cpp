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
        if(!root->right) 
        {
            root->right=temp;
            return; 
        }
        else dfs(root->right);
    }
    TreeNode* deleteNode(TreeNode* &root, int key) {
        if(!root) return NULL;
        if(root->val==key) 
            {
                if(!root->left &&!root->right) root=NULL;
                else if(!root->left && root->right)  root=root->right;
                else if(root->left && !root->right) root=root->left;
                else if(root->left && root->right)
                {
                    temp =root->right;
                    root=root->left;
                    if(!root->right) root->right=temp;
                    else dfs(root->right);
                }
            }
        else
            {
                deleteNode(root->left,key);
                deleteNode(root->right,key);
            }
        return root;
    }
};

int main()
{
    









return 0;
}