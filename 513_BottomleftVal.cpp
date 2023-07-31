#include<iostream>
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
queue<TreeNode*> q;
    int findBottomLeftValue(TreeNode* root) {
        q.push(root);
        int left_val;
        while(q.empty())
        {
            if(q.front()->right) q.push(q.front()->right);
            if(q.front()->left) q.push(q.front()->left);
            left_val=q.front()->val;
            q.pop();
        }
        return left_val;
    }
};
int main()
{
    









return 0;
}