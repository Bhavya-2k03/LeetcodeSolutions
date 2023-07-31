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
    ListNode* reverseList(ListNode* head) {

        ListNode* prevnode=NULL;
        ListNode* nextnode;
        while(head)
        {
            nextnode=head->next;
            head->next=prevnode;
            prevnode=head;
            head=nextnode;
        }
    return prevnode;

    }
};




int main()
{
    









return 0;
}