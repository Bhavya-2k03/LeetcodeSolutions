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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        ListNode* curr= head->next, *prev=head;
        int temp =head->val;
        while(curr)
        {
            if(curr->val==temp)  
            {
                prev->next=curr->next;
                curr=curr->next;
                continue;
            }
            else 
            {
                temp= curr->val;
                curr=curr->next;
                prev=prev->next;
            }

        }
    }
};
int main()
{
    









return 0;
}