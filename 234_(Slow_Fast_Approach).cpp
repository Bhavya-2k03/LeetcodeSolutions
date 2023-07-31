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
    bool isPalindrome(ListNode* head) {
        if(!head) return true;
        ListNode* slow, *fast;
        stack<int> s;
        slow=head;
        fast=head;
        while(fast->next || fast)
        {
        s.push(slow->val);
        slow=slow->next;
        fast=fast->next->next;
        }
        if(fast)
        {
            while(slow)
            {
                if(s.top()!=slow->val) return false;
                s.pop();
            }
        }
        else if(fast->next)
        {
            slow=slow->next;
            while(slow)
            {
                if(s.top()!=slow->val) return false;
                s.pop()
            }
        }
        return true;


    }
};
int main()
{
    









return 0;
}