#include<iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head) return NULL;
        ListNode* slow=head, *fast =head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast) break;
        }
        if(!fast || !fast->next) return NULL;
        slow=head;
        // cout<<fast->val;
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        return fast;

    }
};
int main()
{
    









return 0;
}