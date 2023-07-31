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
    ListNode* swapNodes(ListNode* head, int k) {
        if(!head||!head->next) return head;
        ListNode*curr=head, *p2=NULL, *temp=NULL;
        for(auto curr=head; curr!=NULL; curr=curr->next)
        {
            if(p2) p2=p2->next;
            if(--k==0)
            {
                temp=curr;
                p2=head;
            }
        }
        int t = temp->val; 
        temp->val=p2->val;
        p2->val=t;
        return head;
    }
};
int main()
{
    









return 0;
}