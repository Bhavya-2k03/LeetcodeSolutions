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
    ListNode* removeElements(ListNode* head, int val) {
        while(true)
        {
            if(!head) return head;
            if(head->val!=val) break;
            head=head->next;
        }
        ListNode *prev=head, *curr=head->next;
        while(curr)
        {
            if(curr->val==val)
            {
                if(curr->next)
                {
                    curr=curr->next;
                    delete prev->next;
                    prev->next=curr;
                    continue;
                }
                else 
                {
                    prev->next=NULL;
                    break;
                }
            }
            prev=prev->next;
            curr=curr->next;
        }
    return head;


    }
};
int main()
{
    









return 0;
}