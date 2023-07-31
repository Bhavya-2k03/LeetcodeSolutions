#include<iostream>
using namespace std;
class node
{
public:
    int val;
    node *prev;
    node *next;
    node(int val=0, node *prev=NULL, node *next=NULL)
    {
        this->val=val;
        this->prev=prev;
        this->next=next;
    }
};
class MyLinkedList {
public:
    node*left, *right;
    MyLinkedList() {
        left=new node();      
        right=new node();
        left->next=right;
        right->prev=left;     
    }
    
    int get(int index) {
        node *curr=left->next;
        while(curr!=right)
        {
            if(index--==0) return curr->val;
            curr=curr->next;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        node *curr=left->next;
        left->next=new node(val,left,curr);
        curr->prev=left->next;    
    }
    
    void addAtTail(int val) {
        node *curr=right->prev;
        curr->next=new node(val,curr,right);
        right->prev=curr->next;
    }
    
    void addAtIndex(int index, int val) {
        if(index==0) addAtHead(val);
        node *curr=left->next;
        while(curr!=right)
        {
            if(index--==1)
            {
                node* temp=curr->next;
                curr->next=new node(val,curr,temp);
                temp->prev=curr->next;
            } 
            curr=curr->next;
        }
    }
    
    void deleteAtIndex(int index) {
        if(index==0) 
        {
            left=left->next;
            left->prev=NULL;
            return;
        }
        node *curr=left->next;
        while(curr->next!=right)
        {
            if(index--==1)
            {
                node*temp=curr->next->next;
                curr->next=temp;
                temp->prev=curr;
                return;
            }
            curr=curr->next;
        }
    }
};
int main()
{
    









return 0;
}