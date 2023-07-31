#include<iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
    // int count=0;
    TreeNode* val;
    int dfs(TreeNode* root,int &p,int &q)
    {
        if(!root) return 0;

        int a =0;
        if(root->val==p||root->val==q) a=1;
        int b=dfs(root->left,p,q);
        int c=dfs(root->right,p,q);
        if(a+b+c==2) 
        {val=root;
        // return 0;
        }
        return a+b+c;

    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        dfs(root,p->val,q->val);
        return val;

    }  
};

int main()
{









return 0;
}