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
    void makeTree(vector<int>& nums, int left, int right,TreeNode *&root)
    {
        if(left>right) return;
        int mid=(left+right)/2;
        root=new TreeNode(nums[mid]);
        makeTree(nums,left,mid-1,root->left);
        makeTree(nums,mid+1,right,root->right);

    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
    TreeNode* root;
    int left =0;
    int right =nums.size()-1;
    makeTree(nums,left,right,root);
    return root;


    }
};
int main()
{
    









return 0;
}