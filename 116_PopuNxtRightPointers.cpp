#include<iostream>
#include<queue>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};


class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
        queue<Node*> q;
        q.push(root);
        while(q.size())
        {
            int size=q.size();
            for (int i = 0; i < size; i++)
            {
                if(q.front()->left) q.push(q.front()->left);
                if(q.front()->right)  q.push(q.front()->right);
                Node* ptr=q.front();
                q.pop();
                if(!q.empty()) ptr->next=q.front();
                else if(i==size-1) ptr->next=NULL;
            }
        }
        return root;
    }
};
int main()
{
    









return 0;
}