#include<iostream>
#include<vector>
#include<deque>
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {{}};
        deque<TreeNode*> q;
        vector<vector<int>> ans;
        q.push_back(root);
        int bit=0;
        while(!q.empty())
        {
            int size=q.size();
            vector<int> vec;
            for (int i = 0; i <size; i++)
            {
                if(!bit)
                {
                        if(q.back()->left) q.push_front(q.back()->left);
                        if(q.back()->right) q.push_front(q.back()->right);
                        vec.push_back(q.back()->val);
                        q.pop_back();   
                }
                else
                {
                        if(q.front()->right) q.push_back(q.front()->right);
                        if(q.front()->left) q.push_back(q.front()->left);
                        vec.push_back(q.front()->val);
                        q.pop_front(); 
                }
            }
            if(bit) bit=0;
            else bit=1;
            ans.push_back(vec);
        }

    return ans;

    }
};
int main()
{
    









return 0;
}