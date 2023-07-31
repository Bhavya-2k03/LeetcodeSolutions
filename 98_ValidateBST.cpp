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
    bool valid=true;
    TreeNode* dfs(TreeNode* root, int value, int temp)
    {
        if(!root) return NULL;
        if (valid == false) return NULL; 
        cout<<value<<" "<<root->val<<" temp is "<<temp<<endl;
        if(temp==0) 
        {
            if(root->val>=value) valid =false;
        }
        else if(temp==1) 
        {
            if(root->val<=value) 
            {
                valid =false;
                // cout<<valid;
            }
        }
        dfs(root->left,root->val,0);
        dfs(root->right,root->val,1);
        return root;
    }

    bool isValidBST(TreeNode* root) {
        dfs(root->left, root->val,0);
        // cout<<
        dfs(root->right, root->val,1);
        return valid;
    }
};

int main()
{
    









return 0;
}