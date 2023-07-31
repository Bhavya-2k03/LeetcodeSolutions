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
    ListNode* swapNodes(ListNode* head, int k) {
        if(!head||!head->next) return head;
        stack<int> s;
        int size=0,count=1,flag=0;
        ListNode* curr=head;

        while(curr)
        {
            s.push(curr->val);
            curr=curr->next;
            size++;
        }
        curr=head;
        while(count<=size)
        {
            if(count==k||count==size-k+1)  curr->val=s.top();
            count++;
            s.pop();
            curr=curr->next;
        }
        return head;
    }
};
int main()
{
    









return 0;
}