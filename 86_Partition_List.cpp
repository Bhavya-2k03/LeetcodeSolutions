#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* p1= new ListNode();
        ListNode* p2= new ListNode();
        ListNode *ptr1=p1,*ptr2=p2;
        while(!head)
        {
            if(head->val<x)
            {
                p1->next=head;
                p1=p1->next;
            }
            else 
            {
                p2->next=head;
                p2=p2->next;
            }
            head=head->next;
        }
        p2->next=NULL;
        p1->next=ptr2->next;
        return ptr1;
    }
};
int main()
{
    









return 0;
}