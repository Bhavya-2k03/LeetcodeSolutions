#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node* left;
        node* right;
    node(int d)
    {
        data =d;
        left =NULL;
        right= NULL;
    }
};

node* buildNode()
{
    int x;
    // cout<<"Enter value of node: ";
    cin>>x;

    if (x==-1)
    return NULL;
    node *ptr=new node(x);
    ptr->left=buildNode();
    ptr->right=buildNode();
    return ptr;

}

void printnode(node* ptr)
{
    if(ptr==NULL)
    {
        // cout<<"hello";
    return;
    }
    cout<<ptr->data<<" ";
    printnode(ptr->left);
    printnode(ptr->right);
}


int main()
{   
    node* ptr= buildNode();
    printnode(ptr);

}