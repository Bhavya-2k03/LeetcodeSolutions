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
    
TreeNode* makeTree(TreeNode* root1, TreeNode* root2, TreeNode* &rootNew)
{
        if(!root1 && !root2) 
        {
            // rootNew=NULL;
            // delete rootNew;
            return NULL; 
        }
        else if (!root1)
        {
              rootNew =new TreeNode(root2->val);
            // rootNew->val=root2->val;
            // rootNew->left=new TreeNode; 
            // rootNew->right=new TreeNode; 
            // root1->left=NULL;
            // root1->right=NULL;
            makeTree(NULL,root2->left,rootNew->left); 
            makeTree(NULL,root2->right,rootNew->right);
            return NULL;
        }
        else if (!root2)               
        {
        // rootNew->left=new TreeNode;   
        // rootNew->right=new TreeNode;    
        // rootNew->val=root1->val;
        rootNew =new TreeNode(root1->val);

        makeTree(root1->left,NULL,rootNew->left); 
        makeTree(root1->right,NULL,rootNew->right);

        return NULL;
        }
        else 
        {
        rootNew =new TreeNode(root1->val+root2->val);
        // {rootNew->val=root1->val+root2->val;
        // }
        // rootNew->left=new TreeNode; 
        // rootNew->right=new TreeNode;
        
        makeTree(root1->left,root2->left,rootNew->left); 
        makeTree(root1->right,root2->right,rootNew->right);
        
        return rootNew;
        }
}


    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {

        TreeNode* rootNew;            
        makeTree(root1, root2, rootNew);
        return rootNew;
    }
};



int main()
{
    









return 0;
}