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
        if (!root) return ans;
        queue<TreeNode*> q;
        int size;
        q.push(root);
        while(!q.empty())
        {
            size=q.size();
            vector<int> nodValue;
            
            for(int i=0; i<size; i++)
            {
            if(q.front()->left)  q.push(q.front()->left);  
            if(q.front()->right) q.push(q.front()->right);
            nodValue.push_back(q.front()->val);
            q.pop();
            }

            ans.push_back(nodValue);
        }
    return ans;



    }
};
