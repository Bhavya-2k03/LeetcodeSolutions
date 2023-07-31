#include<iostream>
#include<vector>
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
    vector<vector<int>> ans;
    // int temp=0;
    int maxdepth=0;
    int depthofNode(TreeNode* root, int depth)
    {
        if(!root) return 0;
        if(depth>maxdepth) 
        {
            ans.resize(depth);
            maxdepth=depth;
        }
        ans[depth-1].push_back(root->val);
        depth++;
        depthofNode(root->left,depth);
        depthofNode(root->right,depth);
        return 0;
    }   
    vector<vector<int>> levelOrder(TreeNode* root) {
            depthofNode(root,1);
    return ans;

    }
};




int main()
{
    









return 0;
}