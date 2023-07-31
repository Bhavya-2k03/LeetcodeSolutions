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
        stack<ListNode*> s;
        ListNode* curr= head;
        int size=0, count=0, Maxsum=0;
        while(curr)
        {
            s.push(curr);
            curr=curr->next;
            size++;
        }
        curr=head;
        while(count<size/2)
        {
            int sum =curr->val+s.top()->val;
            if(sum>Maxsum) Maxsum=sum;
            s.pop();
            curr=curr->next;
            count++;
        }
        return Maxsum;
    }
};
int main()
{
    









return 0;
}