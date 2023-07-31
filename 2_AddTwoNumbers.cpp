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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry =0;
        ListNode *head=new ListNode;
        ListNode *curr=head;
        while(l1 || l2)
        {
            if(l1 && l2)
            {
                int temp=l1->val+l2->val+carry;
                curr->next=new ListNode((temp)%10);
                carry=temp/10;
                l1=l1->next;
                l2=l2->next;
                curr=curr->next;
            }
            else if(l1 && !l2)
            {
                int temp=l1->val+carry;
                curr->next=new ListNode((temp)%10);
                carry=temp/10;
                l1=l1->next;
                curr=curr->next;
            }
            else if(!l1 && l2)
            {
                int temp=l2->val+carry;
                curr->next=new ListNode((temp)%10);
                carry=temp/10;
                l2=l2->next;
                curr=curr->next;
            }
        }
        if(carry) curr->next =new ListNode(carry);
        return head->next;
    }
};
int main()
{
    









return 0;
}