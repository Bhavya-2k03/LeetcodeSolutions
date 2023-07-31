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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0) return head;
        if(!head||head->next) return head;
        cout<<head->val;
        ListNode*curr=head, *curr2=head;
        while(k)
        {
            curr2=curr2->next;
            k--;
        }
        while(curr2->next) 
        {
            curr=curr->next;
            curr2=curr2->next;
        }
        curr2->next=head;        
        
        head=curr->next;
        curr->next=NULL;
        return head;
    }
};
int main()
{
    









return 0;
}