#include<iostream>
#include<vector>
#include<string>
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
    // vector<string> nums;
    int sum=0;
    void dfs(TreeNode *root, string str)
    {
        if(!root) return;
        if(!(root->left) && !(root->right))  
        {
            sum=sum+stoi(str+to_string(root->val));
        // nums.push_back(str+to_string(root->val));
        return; 
        }
        dfs(root->left,str+to_string(root->val));
        dfs(root->right,str+to_string(root->val));
    }

    int sumNumbers(TreeNode* root) {
        dfs(root,"");
 

        return sum;
    }
};
int main()
{
    









return 0;
}