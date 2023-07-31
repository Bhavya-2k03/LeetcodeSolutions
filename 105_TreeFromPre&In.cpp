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

    TreeNode *subroot; 
    void makeTree(TreeNode* &root, vector<int>& preorder, vector<int>& inorder, int &index, int i, int j)
    {
        if(i>j) return ;
        // cout<<preorder[index]<<" "<<i<<" "<<j<<endl;
        root=new TreeNode(preorder[index]);
        int split=0;
        for (int i = 0; i < inorder.size(); i++)
        {
            if(preorder[index]==inorder[i])
            {split=i;
            break;
            }
        }
        index++;
        makeTree(root->left,preorder,inorder,index,i,split-1);
        makeTree(root->right,preorder,inorder,index,split+1,j);

    }
    

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode *root;
        int index=0;
        makeTree(root,preorder,inorder,index,0,inorder.size()-1);
        return root;
    }
}; 



int main()
{
    









return 0;
}