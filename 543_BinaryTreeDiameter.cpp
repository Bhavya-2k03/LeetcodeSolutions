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
    int maxDiameter=0;
    int maxD(TreeNode* root)
    {
        if(!root) return 0;    

        int Maxleft=diameterOfBinaryTree(root->left);
        int MaxRight=diameterOfBinaryTree(root-> right);

        maxDiameter=max(Maxleft+MaxRight,maxDiameter);
        return max(Maxleft,MaxRight)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        maxD(root);
        return maxDiameter;

    }
};
int main()
{
    









return 0;
}