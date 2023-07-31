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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right||!head||!head->next) return head;
        ListNode *lptr=head,*rptr=head;
        ListNode *pleft, *nright;
        while (right!=1) 
        {
            rptr=rptr->next;
            right--;
        }
        if(left==1) pleft=NULL;
        else 
        {
            while(left!=2) 
            {
                lptr=lptr->next;
                left--;
            }
            pleft=lptr;
            lptr=lptr->next;
        }
        nright=rptr->next;
        
        ListNode *templ=lptr, *tempr=rptr, *temp,*prevnode=NULL;
        while(lptr!=rptr)
        {
            temp=lptr->next;
            lptr->next=prevnode;
            prevnode=lptr;
            lptr=temp;
        }
        temp->next=prevnode;
        templ->next=nright;
        if(!pleft) return rptr;
        pleft->next=temp;

        return head;
        
    }
};
int main()
{
    









return 0;
}