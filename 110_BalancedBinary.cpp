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
    int height(TreeNode* root)
    {
        if (!root) return 0;

        int MaxLeft=height(root->left);
        if(MaxLeft==-1) return -1;

        int MaxRight=height(root->right);
        if(MaxRight==-1) return -1;
        
        if ((MaxLeft-MaxRight>1) || (MaxLeft-MaxRight)<-1) return -1;

        return max(MaxLeft,MaxRight)+1;

    }



    bool isBalanced(TreeNode* root) {
        int temp= height(root);

        if(temp!=-1) return true;
        
        return false;


    }
};
int main()
{
    









return 0;
}