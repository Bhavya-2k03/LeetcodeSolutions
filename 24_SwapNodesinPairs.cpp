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
    ListNode* swapPairs(ListNode* head) {
        if(!head||!head->next) return head;
        ListNode *curr=head;
        ListNode* prev=head;
        ListNode *temp2=head->next;
        while(curr && curr->next)
        {
            // prev=curr;
            ListNode *temp=curr->next->next;
            curr->next->next=curr;
            prev->next=curr->next;
            curr->next=temp;
            prev=curr;
            curr=curr->next;
        }
        return temp2;
    }
};
int main()
{
    









return 0;
}