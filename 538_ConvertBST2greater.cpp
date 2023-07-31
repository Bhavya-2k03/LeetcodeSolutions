#include<iostream>
#include<vector>
#include<numeric>
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
    vector<int> vec;
    void dfs(TreeNode* &root)
    {
        if(!root) return;
        dfs(root->left);
        vec.push_back(root->val);
        dfs(root->right);
    }
    void update(TreeNode* &root,vector<int> &vec)
    {
        if(!root) return;
        update(root->left,vec);
        root->val=vec.front();
        vec.erase(vec.begin());
        update(root->right,vec);
    }
    TreeNode* convertBST(TreeNode* root) {
        dfs(root);
        int sum =accumulate(vec.begin(),vec.end(),0);
        int total=0;
        for (int i = 0; i < vec.size(); i++)
        {
            vec[i]=sum-total;
            total =total +vec[i];
        }
        update(root,vec);        
        return root;
    } 
};
int main()
{
    









return 0;
}