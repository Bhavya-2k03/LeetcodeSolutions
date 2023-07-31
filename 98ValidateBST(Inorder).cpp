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
long long int temp=-2147483699;
bool valid=true;
    TreeNode* dfs(TreeNode* root)
    {
        if(!root) return NULL;

        dfs(root->left);
        if(root->val<=temp) valid =false; 
        else temp =root->val;
        dfs(root->right);
        return root;
    };
    bool isValidBST(TreeNode* root) {
        
        dfs(root);
        return valid;





    }
};
int main()
{
    









return 0;
}