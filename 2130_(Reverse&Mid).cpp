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
    int pairSum(ListNode* head) {
        if(!head) return 0;
        int MaxSum=0;
        ListNode* slow=head, * fast=head;
        while(fast)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* curr=slow->next, *prev=NULL;
        while(slow)
        {
            slow->next=prev;
            prev=slow;
            slow=curr;
            if(!slow) break;
            curr=curr->next;
        }
        while(prev && head)
        {
            int sum=prev->val+head->val;
            if(sum>MaxSum) MaxSum=sum;
            prev=prev->next;
            head=head->next;
        }
        return MaxSum;
    }
};
int main()
{
    









return 0;
}