#include<iostream>
#include<vector>
#include<queue>
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        int size=0;
        q.push(root);
        while(q.size()!=0)
        {
            if(!q.front()->left)  q.push(q.front()->left);
            if(!q.front()->right) q.push(q.front()->right);
            // ans.resize
            cout<<q.front()->val<<" ";
            q.pop();
            size++;

        }




    }
};
int main()
{
    









return 0;
}