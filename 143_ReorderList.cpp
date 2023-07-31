#include<iostream>
#include<stack>
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
    void reorderList(ListNode* head) {
        
        if(!head||!head->next||!head->next->next)return;

        ListNode *curr = head;
        stack<ListNode*> s;
        int size=0, count=0;
        while(curr)
        {
            s.push(curr);
            curr=curr->next;
            size++;
        }
        curr=head;
        // ListNode*temp=curr->next;
        while(count<size/2)
        {
            s.top()->next=curr->next;
            curr->next=s.top();
            curr=curr->next->next;
            s.pop();
            count++;
        }
        curr->next=NULL;
   
    }
};
int main()
{
    









return 0;
}