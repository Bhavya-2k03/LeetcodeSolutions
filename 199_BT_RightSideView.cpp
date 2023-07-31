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
vector<int> ans;
    void bfs(TreeNode* root)
    {
        // vector<int> 
        queue<TreeNode*> q;
        q.push(root);
        int qsize=q.size();
        while(!q.empty())
        {
            for (int i = 0; i < qsize; i++)
            {
                if (q.front()->left)    q.push(q.front()->left);
                if (q.front()->right)   q.push(q.front()->right);

                if(i==(qsize-1)) ans.push_back(q.front()->val);

                q.pop();
            }
            // q.pop();
            qsize=q.size();
            
        }


    };



    vector<int> rightSideView(TreeNode* root) {
        bfs(root);
        return ans;



    }
};
int main()
{
    









return 0;
}