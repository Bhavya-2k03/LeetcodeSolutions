#include<iostream>
using namespace std;

// Definition for a binary tree node.
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
    int Maxcount=0;
    TreeNode* preorder(TreeNode* ptr, int temp)
    {
        if(!ptr) return NULL;
        temp++;
        Maxcount=max(temp,Maxcount);

        preorder(ptr->left, temp);
        preorder(ptr->right, temp);
        return ptr;

    }



    int maxDepth(TreeNode* root) {
    
       preorder(root,0);
       return Maxcount;
        
    }
};
int main()
{
    









return 0;
}